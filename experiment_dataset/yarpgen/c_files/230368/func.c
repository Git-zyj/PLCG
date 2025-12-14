/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230368
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((_Bool) ((arr_1 [i_0]) & (((/* implicit */long long int) 478947285U)))))), (min((min((3816019998U), (((/* implicit */unsigned int) (unsigned char)213)))), (((/* implicit */unsigned int) min((var_4), (((/* implicit */unsigned short) arr_0 [i_0])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_0 [i_0]))))))), (((unsigned int) var_12))));
    }
    var_16 += ((/* implicit */unsigned short) min((var_13), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)43254))))))));
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        for (unsigned int i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            {
                                arr_17 [i_1] [(unsigned short)16] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_15 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1])))) - (((/* implicit */int) min(((signed char)-7), (((/* implicit */signed char) (_Bool)1)))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */int) (!(arr_15 [i_2 + 1] [i_2 - 1] [(signed char)17] [i_2 - 1] [i_3])))) & (((/* implicit */int) ((3641241541U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))))))));
                                var_18 = ((/* implicit */unsigned char) var_6);
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) arr_5 [i_2] [i_2])), (arr_12 [i_1] [i_2] [i_3] [i_2 - 1])))));
                    arr_18 [(unsigned char)2] [i_2] &= ((/* implicit */int) (((~(arr_10 [14LL] [i_2 - 1]))) != (min((min((-6194764131633701549LL), (((/* implicit */long long int) 1267371608U)))), ((-(-3065735708186241763LL)))))));
                    var_20 += ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 2068885308)) ? (0LL) : (((/* implicit */long long int) 3816020005U)))));
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) arr_15 [i_1] [(unsigned short)9] [i_2] [i_2] [i_3])))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)43254)))))))));
                }
            } 
        } 
    } 
    var_22 = var_1;
    var_23 *= ((/* implicit */short) max((((/* implicit */int) var_4)), (((((((/* implicit */_Bool) (unsigned char)30)) ? (23414773) : (((/* implicit */int) var_14)))) % ((~(((/* implicit */int) var_4))))))));
}
