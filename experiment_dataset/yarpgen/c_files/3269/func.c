/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3269
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_1 - 1] [i_1]), ((unsigned short)51360)))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)3] [i_1 - 1] [i_1]))))))));
            arr_4 [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) arr_5 [i_0] [i_2]);
            arr_9 [i_0] [i_2] [i_2 - 2] = ((/* implicit */unsigned char) arr_2 [i_0]);
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) arr_5 [i_2 - 2] [i_2 - 2])) : (var_12)));
        }
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
    {
        var_21 |= arr_5 [(unsigned short)16] [10ULL];
        var_22 = ((/* implicit */unsigned long long int) arr_5 [i_3] [i_3]);
        var_23 = ((/* implicit */signed char) arr_1 [i_3]);
        /* LoopNest 3 */
        for (signed char i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) 1196560468935998102ULL);
                        var_25 = -1;
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)23)) ? (((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (unsigned short)65427)) : (((/* implicit */int) var_8)))) : (var_14))), (((/* implicit */int) (signed char)-72))));
    var_27 = ((/* implicit */int) min((var_16), (((/* implicit */unsigned char) (signed char)23))));
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (1892566010) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2))));
}
