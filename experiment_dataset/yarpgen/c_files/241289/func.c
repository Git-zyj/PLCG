/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241289
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */short) (-(((((/* implicit */int) arr_8 [i_2 - 1] [i_2] [i_2])) ^ (((/* implicit */int) (short)27226))))));
                    var_11 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44004))) > (((unsigned int) (_Bool)1))));
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_11 [i_1] [i_2 - 2] [i_2 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_4 [10ULL] [i_1] [i_2 - 1])))))) : ((~(arr_11 [i_0] [(signed char)3] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((arr_9 [(_Bool)1] [i_1] [i_0]) <= (arr_2 [(unsigned short)19])))) : ((-(((/* implicit */int) (unsigned short)21532)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == ((+(((/* implicit */int) (_Bool)1)))))))));
                                var_14 = ((/* implicit */long long int) arr_13 [i_0] [i_2] [i_2] [i_2] [i_0]);
                                var_15 = ((/* implicit */int) min((var_15), (((((((/* implicit */int) arr_4 [i_2 + 1] [i_3 + 2] [i_4 - 1])) * (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_4)))))) / (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-69))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (arr_4 [i_4] [i_2 - 2] [i_0]))))))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */long long int) max(((~(((/* implicit */int) (short)923)))), (-390212810)))) - ((+(arr_12 [i_2] [11ULL] [i_2 - 2] [i_1] [19LL] [i_2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [4LL] [i_0] [4LL] [i_0]))) >= (max((arr_1 [i_0]), (((/* implicit */long long int) (short)0))))))) | (((/* implicit */int) (_Bool)1))));
    }
    var_18 &= ((/* implicit */_Bool) (((~(max((((/* implicit */unsigned long long int) (_Bool)0)), (var_1))))) >> (((((/* implicit */int) var_3)) + (135)))));
}
