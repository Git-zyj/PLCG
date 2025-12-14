/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38755
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
    var_17 *= ((/* implicit */signed char) ((var_11) + (((/* implicit */unsigned long long int) (-(var_9))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) var_16);
        var_19 = ((/* implicit */unsigned short) (+(arr_1 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */short) 9667536132024537614ULL);
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_16))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_11 [i_1] [i_2] [i_2] = 16600703043211661409ULL;
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)4605)) : (((/* implicit */int) (short)21849)))))))))));
        }
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    arr_17 [i_4] [i_1] [i_1] = 9143269895871859874LL;
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)4603)) / (((/* implicit */int) (short)4605))))) : (-3319814080514468911LL))) ^ (((/* implicit */long long int) 2147418112)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */signed char) (-(min((((unsigned long long int) (signed char)(-127 - 1))), (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */signed char) (_Bool)0)))))))));
                                arr_23 [i_5] [i_3] [i_4] [i_1] [i_5] = ((((/* implicit */int) ((((3835242741740622105LL) << (((((/* implicit */int) (signed char)78)) - (78))))) != (((/* implicit */long long int) 258048))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17755))) == (var_8)))));
                                arr_24 [i_3] [i_3 + 1] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
