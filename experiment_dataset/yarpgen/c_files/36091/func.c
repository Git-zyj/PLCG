/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36091
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
    var_12 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_11))))));
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))), (((((/* implicit */_Bool) max((var_0), (var_3)))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) (((~(((/* implicit */int) var_10)))) * (((/* implicit */int) ((((unsigned long long int) var_7)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    var_15 = ((/* implicit */short) (+(((/* implicit */int) min((arr_8 [14] [i_2 - 3] [i_2 - 1]), (((/* implicit */unsigned char) var_3)))))));
                    var_16 = ((/* implicit */signed char) (+(max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) ((signed char) var_8)))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_17 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-32744))));
                        arr_12 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */short) (-((-(((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_1])), (var_4))))))));
                        var_18 = ((/* implicit */unsigned long long int) ((short) min((var_6), (((/* implicit */int) var_7)))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 1) 
                        {
                            arr_16 [i_2] [15] [i_2] [i_1] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) << ((((((-(((/* implicit */int) var_4)))) + (49196))) - (13)))))), (arr_5 [i_2] [i_3]));
                            var_19 = ((/* implicit */int) var_7);
                        }
                    }
                }
                arr_17 [i_0] [i_0] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) (short)32744)), (7548125850459337682ULL)))));
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned char) min((((/* implicit */int) var_0)), ((+((-(((/* implicit */int) var_10))))))));
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) max((var_3), (var_11)))) & (((/* implicit */int) var_2)))) | ((~((+(((/* implicit */int) var_7))))))));
}
