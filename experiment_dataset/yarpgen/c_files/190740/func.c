/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190740
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) arr_4 [i_2] [i_1 - 2]))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((2189725500U) & (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)77))))))))))));
                            var_22 ^= ((/* implicit */long long int) (unsigned short)32055);
                            var_23 = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */short) arr_8 [i_1] [i_2 - 2])), ((short)742))))));
                        }
                    } 
                } 
                arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_4 [i_1] [i_1 + 3])))) ? (((/* implicit */int) ((95657071377672313ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 2]))))))))) : (((/* implicit */int) ((unsigned char) -1LL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        for (int i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        arr_20 [i_6] [0ULL] [i_6] &= ((/* implicit */unsigned char) 9763460989850041881ULL);
                        arr_21 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) ((signed char) (-(arr_14 [i_5] [i_5]))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 3) 
                    {
                        var_24 |= ((/* implicit */signed char) (short)-28674);
                        arr_25 [i_5] [i_5] [i_5] [i_5 + 1] [i_6] &= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [i_5] [i_6] [i_6])), (arr_19 [i_4] [i_4] [i_4]))))) > (max((max((15425221797137516410ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((var_17) > (((/* implicit */unsigned int) 2147483647)))))))));
                    }
                    var_25 = ((/* implicit */long long int) ((max((3025157220U), (((/* implicit */unsigned int) (short)-4346)))) > (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)19)))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) (short)-21444);
}
