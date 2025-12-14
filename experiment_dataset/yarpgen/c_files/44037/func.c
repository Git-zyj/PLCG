/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44037
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) var_5))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (signed char)-85))))) && (((/* implicit */_Bool) var_17)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-27)) && (((/* implicit */_Bool) (+(-505702177159918934LL))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (6120296222534453408ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (5136468743254335414LL))))));
                            var_21 = ((/* implicit */short) var_4);
                            var_22 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 2])) && (((/* implicit */_Bool) arr_8 [(unsigned char)14] [18ULL] [i_1] [i_1 - 2] [i_1] [i_1]))))), (max((((/* implicit */unsigned long long int) var_0)), (6120296222534453408ULL)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_4 = 4; i_4 < 19; i_4 += 4) 
                {
                    var_23 *= ((/* implicit */unsigned char) ((short) (short)16910));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_0))));
                        var_25 *= ((unsigned long long int) ((signed char) arr_6 [i_0 + 2] [i_1 + 1] [13ULL] [i_4 - 1]));
                        var_26 = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) arr_7 [i_0 + 2] [i_1] [i_4] [i_0] [i_5] [i_1 - 1])))));
                    }
                }
                for (signed char i_6 = 3; i_6 < 16; i_6 += 3) 
                {
                    arr_19 [i_0 + 2] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_17) : (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_9 [i_0 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) 5866809449874944143LL)) : (max((((/* implicit */unsigned long long int) ((unsigned char) var_11))), (arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 2])))));
                    var_27 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_1] [i_1] [i_0] [i_6]);
                    arr_20 [i_0 + 2] [i_6] = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_6] [i_1] [i_0 + 2] [i_0 + 2]))))), (arr_0 [i_1 + 4])));
                    arr_21 [i_6] [i_1] = arr_8 [i_0] [i_1 + 3] [i_1 + 3] [i_0] [i_6 + 2] [i_1];
                    var_28 = ((/* implicit */long long int) min((var_28), ((+(((long long int) arr_7 [i_6 + 2] [i_1] [i_6] [i_0 + 2] [i_6] [i_6]))))));
                }
            }
        } 
    } 
}
