/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205295
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
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) (-((+(var_10)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))) ^ (-6442619152761915760LL)))));
                            var_19 = ((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_2])), ((~(((((/* implicit */_Bool) (short)-32455)) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (signed char)87))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_12 [i_0 + 3] [i_2] [i_1] [i_0 + 3] [i_2] [i_3] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)87))) : (var_17)))));
                                arr_16 [i_0 + 1] [i_0] [i_1] [(unsigned char)5] [(signed char)3] [i_2] [i_4] = ((/* implicit */long long int) (short)-12434);
                                var_21 = ((/* implicit */short) arr_15 [i_4] [i_2] [i_2]);
                            }
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [(short)4] [i_2] [i_3] [i_0 - 1] [i_3 + 1] [i_2]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)115)), (arr_12 [i_0 - 1] [10ULL] [i_0] [i_3 + 3] [i_0 + 3] [i_3 + 2] [i_0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) 2566425963U);
    var_24 = ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) var_17)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -281713571858634297LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3830928427U))))))));
}
