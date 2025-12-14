/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229677
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (((+(var_5))) / (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-78)))))))) ? (((((/* implicit */_Bool) (short)-9271)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9267))) : (4294967288U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9))))));
                    var_14 += ((/* implicit */unsigned short) (((((+(((/* implicit */int) (signed char)-14)))) < (((/* implicit */int) ((short) (unsigned char)8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) (unsigned short)17514)))) <= (((/* implicit */int) ((6ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))))) : ((+((~(0U)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) min((var_15), (((((max((((/* implicit */unsigned long long int) 646937074)), (15580753237237378109ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned char)0)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)31288))))) < (3906770221U)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((signed char) var_4))) <= (((((/* implicit */_Bool) (unsigned short)40165)) ? (var_2) : (((/* implicit */int) (signed char)8)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned long long int) -1LL)) : (18446744073709551610ULL)))) ? (((unsigned int) 0ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
}
