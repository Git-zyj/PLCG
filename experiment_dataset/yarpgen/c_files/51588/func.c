/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51588
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_8 [i_1] = ((/* implicit */int) (_Bool)0);
                    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), (arr_2 [i_1])))) ? ((-(-386300271))) : (((((/* implicit */int) (unsigned short)25198)) ^ (((/* implicit */int) (signed char)127)))))))))));
                }
                for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0 + 2] [i_1 - 2] [i_1])) ? (arr_0 [i_0] [i_1 - 2]) : (var_0)))) ? (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_1] [i_3])) : (max((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0]))))), ((-(571957152676052992LL))))))))));
                    arr_11 [i_1] [i_1 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((571957152676052992LL), (((/* implicit */long long int) var_8))))) ? ((-(min((((/* implicit */unsigned long long int) var_9)), (1227232864924120501ULL))))) : (((/* implicit */unsigned long long int) (-((((_Bool)0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))))))));
                    var_12 *= ((/* implicit */_Bool) max((((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)25198))))))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_3] [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (var_4))))))));
                    var_13 &= ((/* implicit */unsigned short) ((short) (short)0));
                    arr_12 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_1 + 1] [i_3]))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((1712917414), (((/* implicit */int) var_9))));
}
