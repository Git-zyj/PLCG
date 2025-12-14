/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194694
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 1) 
                {
                    for (unsigned short i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)161)), (50906161041025519LL)))), (((arr_0 [(unsigned char)4] [i_3]) | (((/* implicit */unsigned long long int) var_9)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */long long int) (unsigned char)2)), (var_9))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1] [i_3]))))))))));
                            arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_1 - 1])))), ((+(((/* implicit */int) (signed char)126))))))) ? ((-(((/* implicit */int) arr_9 [i_0] [10LL] [i_3 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)161)) % (((/* implicit */int) arr_2 [i_1]))))))))));
                            var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [4U] [i_1] [i_3])) >> (((((/* implicit */int) arr_4 [i_0 + 1])) - (65))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned char i_5 = 2; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_5] [i_4] [8ULL] [i_1] [i_1] [i_0]))))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) -6310954013424618199LL)) ? (arr_12 [i_0 - 3] [i_0] [4] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61403))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))))))));
                            var_17 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)95))))) + (min((((/* implicit */unsigned int) arr_6 [i_0])), (197472732U))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)209)), (-1388755567))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 22; i_6 += 2) 
    {
        for (int i_7 = 1; i_7 < 21; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)24)) ? (-1113626706) : (((/* implicit */int) (unsigned char)148))))) ? ((-(arr_24 [i_6] [i_7] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47864))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)254)))))));
                    var_19 -= ((/* implicit */_Bool) min((((((/* implicit */int) arr_22 [i_8 + 1])) + (((/* implicit */int) arr_22 [i_8 - 1])))), (((/* implicit */int) (!(var_5))))));
                    arr_26 [i_6] [i_6] [i_7] [i_7] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) arr_22 [i_6 - 1])) <= (((/* implicit */int) var_1))))), (-1)));
                }
            } 
        } 
    } 
}
