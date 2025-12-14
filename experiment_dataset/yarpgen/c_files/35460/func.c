/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35460
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
    var_12 |= ((/* implicit */unsigned short) (-(6865110558808781148LL)));
    var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)33)), ((-(min((var_9), (((/* implicit */unsigned long long int) (unsigned short)65535))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) arr_3 [i_0]))));
        var_15 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)0))))));
        var_16 *= ((/* implicit */signed char) ((arr_1 [i_0 - 1]) > (arr_2 [i_0 + 3])));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) 18446744073709551615ULL);
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (_Bool)1))));
        arr_7 [i_1] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_6 [i_1]))))));
        arr_8 [i_1] = ((/* implicit */int) 2732023937973637815ULL);
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
    {
        var_20 += ((/* implicit */signed char) max((((/* implicit */unsigned short) (_Bool)1)), (var_5)));
        /* LoopNest 3 */
        for (signed char i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */short) 2732023937973637815ULL);
                            var_22 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((7345602927220835710LL) >> (((/* implicit */int) (_Bool)1))))), (1566903189380698985ULL)));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_18 [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3 - 1])) ? ((((_Bool)1) ? (1396106836905658282ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28586))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)124)) != (((/* implicit */int) (_Bool)1)))))))) * (((1396106836905658282ULL) / (15714720135735913799ULL))))))));
                            arr_19 [i_2] [i_2] [i_2] [(_Bool)1] [i_4] [i_5] [i_6] = (~(15714720135735913829ULL));
                            var_24 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (+(13163301038530175630ULL)))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            arr_23 [i_2] [i_3 - 1] [i_2] [i_5] [i_5] [i_3 - 1] [4] &= ((/* implicit */unsigned long long int) var_11);
                            arr_24 [i_2] [i_3] [i_4] [i_5] [i_7] [i_7] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_3)) >= ((~(((/* implicit */int) (_Bool)1))))))), ((-(((/* implicit */int) (unsigned char)41))))));
                        }
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) 349002333))));
                        var_26 = ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) & (((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_2] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))));
                        var_27 = ((/* implicit */unsigned short) min((3160386282U), (((/* implicit */unsigned int) (_Bool)1))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_3] [1U])))))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned char) var_2);
}
