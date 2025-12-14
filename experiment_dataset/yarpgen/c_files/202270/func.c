/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202270
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44381)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))), (var_10)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_12 = (unsigned char)8;
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            var_13 |= ((/* implicit */unsigned long long int) -1153698158);
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_4))));
                        }
                    }
                    for (short i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_5]))));
                        arr_19 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_1] [i_0] [i_2] [i_1]);
                        var_15 = ((/* implicit */unsigned long long int) arr_10 [i_5]);
                    }
                    var_16 = ((/* implicit */short) (+(((arr_7 [i_0] [i_1] [i_1]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))));
                    arr_20 [i_0] = ((/* implicit */unsigned long long int) (-(arr_13 [i_2 + 1] [i_2] [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 2])));
                    arr_21 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(signed char)16] [i_0])) : (((/* implicit */int) var_3)))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((~(((/* implicit */int) (signed char)10))))));
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            var_19 = ((/* implicit */signed char) 18446744073709551608ULL);
            arr_25 [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)21838))));
        }
        for (short i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) 2337172716326079407ULL)) || (((/* implicit */_Bool) (unsigned char)176)))) ? (arr_17 [i_7] [i_7] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
            arr_28 [i_0] = ((/* implicit */signed char) (short)19252);
        }
        for (short i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */int) (!(var_1)));
            var_22 = (!(((/* implicit */_Bool) -6669932672868189758LL)));
        }
    }
    for (short i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
    {
        arr_36 [i_9] = ((/* implicit */signed char) ((((((((/* implicit */int) max((var_2), (((/* implicit */short) (_Bool)1))))) ^ (-1153698159))) + (2147483647))) << (((var_10) - (11171291547290151557ULL)))));
        var_23 = ((/* implicit */signed char) max((var_2), (((/* implicit */short) var_3))));
    }
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (_Bool)1))));
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) -408910687))));
}
