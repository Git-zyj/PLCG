/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233696
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) (~(((unsigned long long int) var_13))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_1 [9U]))));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) arr_4 [i_3] [i_3]);
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_18 ^= ((/* implicit */_Bool) var_13);
                        /* LoopSeq 2 */
                        for (signed char i_5 = 3; i_5 < 21; i_5 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) max((16646896087405410306ULL), (16646896087405410306ULL)));
                            arr_16 [i_1] [i_2] [(unsigned char)6] [(short)10] |= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)15315))));
                            arr_17 [13ULL] [i_4] [i_4] [i_4] [i_2] [i_1] [i_1 + 1] = ((/* implicit */_Bool) arr_3 [i_1]);
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [0ULL] [(signed char)3] [i_3] [i_2])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)29453))))) ? (var_4) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)-16044)))))))));
                        }
                        for (signed char i_6 = 3; i_6 < 21; i_6 += 3) /* same iter space */
                        {
                            arr_20 [i_1] [i_1] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) (signed char)21)) > (((/* implicit */int) (_Bool)1))));
                            var_21 = ((/* implicit */_Bool) (-(var_5)));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16646896087405410314ULL)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16646896087405410314ULL)) ? (((/* implicit */int) (unsigned short)33138)) : (((/* implicit */int) (signed char)-58))))) ? (arr_7 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_18 [i_7] [i_8] [i_9])))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))))));
                    var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(arr_24 [i_9] [i_9])))), (((((/* implicit */unsigned long long int) var_0)) - (((((/* implicit */_Bool) var_2)) ? (arr_21 [(short)15] [i_7]) : (arr_21 [i_7] [i_7])))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))))) ? (var_0) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (var_5))) : (((/* implicit */int) (signed char)21))))));
}
