/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229409
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
    var_20 = ((/* implicit */unsigned int) var_19);
    var_21 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((((/* implicit */int) (short)-4552)) | (((/* implicit */int) arr_1 [i_0] [i_0])))) + (2147483647))) << (((((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1)))) + (20651))) - (9)))))) | (((((/* implicit */_Bool) var_19)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (short)-11409)))))))));
                            var_23 = ((/* implicit */unsigned long long int) min((min((225599301U), (3938188419U))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))))));
                            var_24 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) min((var_19), (((/* implicit */unsigned char) var_13))))) << (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_1))))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_0] [i_0])), (arr_4 [i_0] [i_1 + 1] [i_0]))))) != (0ULL)));
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) (short)-4543)) >= (((/* implicit */int) var_9)))) || (((/* implicit */_Bool) (signed char)3))))) <= (((/* implicit */int) (short)-4573))));
                var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5955))) != (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 3])) ? (arr_5 [(unsigned char)22] [i_1 + 4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            {
                var_27 = ((/* implicit */unsigned char) -1211192310);
                arr_16 [i_4] [i_4] [(signed char)1] = ((/* implicit */unsigned short) var_2);
                var_28 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)20))) | (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 5)) <= (var_8)))) >> (2LL)))) : (max((((/* implicit */unsigned long long int) var_3)), (((unsigned long long int) arr_13 [i_4] [i_5] [1])))));
            }
        } 
    } 
    var_29 = ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) min((var_16), (((/* implicit */unsigned short) var_14))))) != (((/* implicit */int) var_17))))), (var_9)));
}
