/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44668
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */int) ((((arr_0 [i_0]) % (arr_0 [i_0]))) ^ ((+(arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)24420));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_1]))));
        var_20 += ((/* implicit */signed char) arr_6 [i_1] [i_1]);
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) arr_4 [i_1])))))));
    }
    var_22 -= ((/* implicit */signed char) var_14);
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            {
                arr_13 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2 - 2] [i_2 - 2]))))) || (((_Bool) arr_12 [i_2 + 2] [i_3]))));
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6])) ? (1003900143) : (((/* implicit */int) arr_10 [i_6] [i_6]))))) ? (min((((/* implicit */int) (unsigned char)54)), ((-2147483647 - 1)))) : (((/* implicit */int) max((arr_8 [i_3] [7U]), ((unsigned char)240)))))) + (2147483647))) + (2147483647))) << (((((/* implicit */_Bool) arr_14 [i_6])) ? ((+(((/* implicit */int) arr_16 [i_6] [i_6])))) : (((/* implicit */int) arr_19 [i_3] [i_3])))))))));
                                arr_23 [i_3] [i_4] [(signed char)4] [i_2] [(unsigned char)9] = ((/* implicit */signed char) arr_7 [i_2] [i_3]);
                                var_24 = (unsigned char)40;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 |= ((/* implicit */unsigned char) ((unsigned short) (((~(840626241U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned short)10831))))))));
}
