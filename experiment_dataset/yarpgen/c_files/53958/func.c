/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53958
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
    var_17 |= ((/* implicit */int) min((((/* implicit */unsigned int) (short)-1)), (((2476513038U) | (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12090)))))))));
    var_18 = ((/* implicit */short) (-(6060153296884459487LL)));
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12878))) : (1818454257U)))), ((+(var_5)))))) <= (((((((/* implicit */_Bool) 12410321363457067123ULL)) ? (var_9) : (((/* implicit */unsigned long long int) 1818454257U)))) | (((/* implicit */unsigned long long int) ((long long int) var_9)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) var_4)))))), (((((((/* implicit */_Bool) 6036422710252484493ULL)) || (((/* implicit */_Bool) (unsigned char)120)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -5745158900222118897LL)))))) : (var_1)))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((unsigned int) 8191U)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30967))) : (min((((long long int) var_11)), (((/* implicit */long long int) ((short) 9223367638808264704LL))))))))));
        arr_2 [i_0] |= ((/* implicit */int) ((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (0U))) + (((var_7) + (var_15))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (6036422710252484491ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))))))))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (17223507369778760860ULL) : (((/* implicit */unsigned long long int) 1101774436U))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-22139))))) ? (((long long int) (unsigned short)23885)) : (((var_5) + (-6442584495672691820LL))))) : (((arr_0 [i_0]) / ((+(7111975988005513729LL))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 4) /* same iter space */
            {
                var_22 = ((min((var_16), (((/* implicit */unsigned int) arr_6 [i_2 - 1] [i_1] [i_2 + 1])))) >> ((((-(var_8))) - (3495606516915956650LL))));
                var_23 ^= (((+(arr_9 [i_2 - 3] [i_2 - 3] [i_2 - 2] [i_2 - 1]))) / (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (arr_7 [i_1]) : (arr_7 [i_0])))))));
            }
            for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((arr_0 [i_3 - 1]) == (((((/* implicit */_Bool) var_13)) ? (arr_0 [i_3 - 1]) : (arr_0 [i_3 - 3]))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    for (short i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) 2211134368U)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)123))))), (((/* implicit */long long int) ((signed char) arr_7 [i_0]))))) + (((/* implicit */long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_18 [i_0]))), (var_2))))));
                            var_26 = ((/* implicit */signed char) ((var_1) << (((((/* implicit */_Bool) ((var_0) - (((/* implicit */unsigned long long int) arr_16 [i_1] [3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(short)12] [i_3] [i_1] [(short)12])))))) : ((+(var_7)))))));
                            var_27 = ((/* implicit */long long int) 984777689);
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_6 [i_5] [18LL] [(short)2]))));
                        }
                    } 
                } 
                var_29 ^= ((/* implicit */long long int) 12410321363457067123ULL);
            }
            var_30 = ((/* implicit */signed char) (-(arr_5 [i_0] [i_1] [i_0])));
            var_31 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0])) ? (-7407640786770668808LL) : (((/* implicit */long long int) arr_17 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_15) < (1053465040U))))) : (max((((/* implicit */unsigned long long int) arr_17 [i_0])), (var_0)))));
            arr_19 [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_1])) ? (min((arr_5 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) ((unsigned short) 1832153520))))) : (arr_5 [i_0] [i_0] [i_0])));
        }
    }
    var_32 = ((/* implicit */unsigned int) (short)613);
}
