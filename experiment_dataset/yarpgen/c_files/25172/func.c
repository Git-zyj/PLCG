/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25172
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
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */short) (unsigned char)48)), (arr_0 [i_0])))), ((~(((/* implicit */int) (unsigned char)182))))))) ? (((unsigned long long int) (-(-412929659)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))))) < (((/* implicit */int) arr_0 [i_0]))))))));
        var_14 = ((/* implicit */int) var_12);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 7; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0])))))))) > ((~((~(((/* implicit */int) (unsigned char)206)))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) * (107753797)));
                            var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)211))));
                            arr_15 [i_0] = (unsigned char)204;
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 4; i_5 < 19; i_5 += 2) 
    {
        var_18 = ((/* implicit */short) (-(((unsigned long long int) 89530049))));
        var_19 &= ((/* implicit */unsigned char) (+((+(arr_16 [i_5 + 2])))));
        var_20 = min((min((arr_16 [i_5 - 3]), (arr_16 [i_5 - 3]))), (((((/* implicit */_Bool) arr_16 [i_5 - 3])) ? (arr_16 [i_5 - 3]) : (((/* implicit */int) var_5)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_5] [i_6] [i_6])) % (((/* implicit */int) arr_18 [i_5 + 2] [i_5 - 2] [i_5 - 2])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (unsigned int i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    {
                        var_22 = ((/* implicit */int) var_0);
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */unsigned int) arr_19 [i_5] [(_Bool)1] [(short)8])) & (arr_17 [i_8 + 2] [i_5 + 1]))))));
                        arr_24 [i_7] [i_7] [15U] [i_7] = (~(((/* implicit */int) (unsigned char)255)));
                    }
                } 
            } 
        }
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            arr_27 [i_5] [(unsigned short)10] [i_5] = ((/* implicit */long long int) (-(-431858989)));
            arr_28 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5] [i_9] [i_9]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_9] [i_9]))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [(unsigned char)1]))))) ^ (((/* implicit */int) (unsigned char)204))))));
        }
    }
    var_24 *= ((/* implicit */unsigned short) (unsigned char)49);
}
