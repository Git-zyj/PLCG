/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42922
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0 + 1] = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) (unsigned short)13766)) ? (-449121858) : (-449121859))), (((/* implicit */int) min((var_5), (((/* implicit */short) (unsigned char)243))))))), (-449121855)));
        var_16 += ((((/* implicit */_Bool) (short)-12997)) ? (((/* implicit */int) min(((short)24820), (((/* implicit */short) (unsigned char)147))))) : (((/* implicit */int) (unsigned char)255)));
    }
    for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) (_Bool)1);
        var_17 *= ((/* implicit */signed char) var_2);
        var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13019)) ? (-449121859) : (((/* implicit */int) var_11))))) ? (-5607490032353176972LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -449121845)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)108))))))), (((/* implicit */long long int) (-(var_7))))));
        arr_7 [i_1] = min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (max((((/* implicit */int) (short)-1299)), (-449121836))));
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 7; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 7; i_3 += 3) 
            {
                for (unsigned int i_4 = 2; i_4 < 8; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) (unsigned short)51633);
                        arr_16 [(signed char)4] [i_1] [i_3 + 3] [i_1] [i_1] [(signed char)4] |= (unsigned char)255;
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */short) max((((/* implicit */int) (unsigned char)173)), (((((/* implicit */_Bool) (-(2073983979626579975ULL)))) ? ((-(((/* implicit */int) (short)32127)))) : (((/* implicit */int) max(((unsigned short)1916), (((/* implicit */unsigned short) (signed char)-93)))))))));
}
