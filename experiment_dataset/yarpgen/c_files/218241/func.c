/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218241
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? ((~(((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))))))) : (var_5))))));
    var_11 = ((/* implicit */signed char) (unsigned short)57344);
    var_12 = ((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) var_2)) : (((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)57344)) : (((/* implicit */int) (unsigned short)8195)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-2147483647 - 1))), (((long long int) arr_1 [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 12903465261976393583ULL))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (arr_0 [i_0] [i_0])))) ? (5608456950772826485ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)44869)) / (((/* implicit */int) (signed char)(-127 - 1))))))));
                            }
                        } 
                    } 
                    arr_18 [12] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 16377042064706397313ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4139273108U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57344)) || (((/* implicit */_Bool) (unsigned char)137))))) : ((~(((/* implicit */int) arr_6 [i_0])))))) : (max((arr_10 [(unsigned short)10] [i_0] [i_1] [12]), (arr_10 [(_Bool)1] [i_0] [i_1] [i_2])))));
                    var_15 = ((/* implicit */int) (((~(var_5))) <= (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_12 [i_0] [(unsigned char)11] [(unsigned char)11] [i_0] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 9201285971285830122LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)1541))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_17 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) var_3)) : (var_4))) : (arr_10 [i_7] [i_7] [i_7] [i_7])))) || (((/* implicit */_Bool) ((unsigned long long int) max((arr_29 [i_5] [i_5]), (var_2))))));
                            arr_31 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) ((unsigned int) var_4))), (((((/* implicit */_Bool) var_1)) ? (arr_13 [i_5]) : (((/* implicit */unsigned long long int) arr_5 [i_8]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
