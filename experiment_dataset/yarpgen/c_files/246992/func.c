/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246992
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
    var_11 += max((((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), ((short)-5678)))), (var_2));
    var_12 = ((/* implicit */int) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_13 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 1]))))) | ((~(var_6)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 19; i_3 += 3) 
                {
                    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_12 [i_2] [i_2] [i_2] [i_2] [i_1] [i_2]) - (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))))))));
                            arr_17 [i_0] [i_1] [i_1] [(unsigned short)19] [i_0] [i_4 + 2] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) (+(arr_22 [i_0 - 1] [10LL])));
                        arr_24 [i_6] [i_1] [14LL] [i_6] = ((/* implicit */_Bool) (~(1779316262083955982LL)));
                        var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-40)) ? (-1779316262083955981LL) : (((/* implicit */long long int) arr_18 [i_1]))));
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)82)) || (((/* implicit */_Bool) -1803896407)))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_7 = 2; i_7 < 19; i_7 += 4) 
            {
                var_18 = ((/* implicit */signed char) ((((arr_12 [i_7] [(_Bool)1] [(signed char)0] [i_0 + 1] [(signed char)0] [i_0]) + (2147483647))) >> (((arr_18 [i_0 + 1]) - (3832215152U)))));
                arr_29 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((arr_12 [i_1] [i_1] [i_1] [i_1] [8] [i_7]) + (1706637969))))))));
            }
            var_19 += ((/* implicit */unsigned short) ((arr_14 [i_0 + 1] [i_0 + 2]) < (arr_14 [i_0 + 2] [i_0 + 1])));
        }
    }
}
