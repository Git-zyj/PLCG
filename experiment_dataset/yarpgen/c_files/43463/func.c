/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43463
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [5] [5]);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [7ULL])) + (((/* implicit */int) var_6))))) : (18356783954729855731ULL)))));
                        var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) 2241415589331645981LL)) ? (2241415589331645981LL) : (((/* implicit */long long int) (~((-(((/* implicit */int) (short)632)))))))));
                        var_18 = ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) (unsigned short)33801)) ? (arr_9 [i_0] [i_1] [i_2] [i_2] [i_1]) : (((/* implicit */unsigned int) 13))))))));
                    }
                }
            } 
        } 
        var_19 += ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) (short)0)), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 2241415589331645970LL))))))));
    }
    for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        arr_12 [18U] &= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_1)) == (max((arr_11 [i_4]), (((/* implicit */unsigned long long int) var_12))))))), (max((((/* implicit */unsigned long long int) 2241415589331645983LL)), (4154137865908909028ULL)))));
        arr_13 [(short)16] |= ((/* implicit */long long int) (((+(arr_11 [i_4]))) <= (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-628))) : (arr_11 [i_4])))))));
        var_20 = ((/* implicit */int) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (arr_11 [i_4]))), (((/* implicit */unsigned long long int) arr_10 [i_4])))), (arr_11 [(unsigned short)3])));
    }
    for (short i_5 = 3; i_5 < 22; i_5 += 3) 
    {
        var_21 = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)34936)) ? (((/* implicit */int) var_6)) : (arr_15 [i_5])))), (max((2089802682439735830LL), (((/* implicit */long long int) arr_15 [i_5]))))))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) min((arr_14 [i_5 - 2]), (arr_14 [i_5 + 1])))));
        arr_16 [16U] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (0U)));
        arr_17 [i_5] = ((/* implicit */int) (unsigned short)11495);
        arr_18 [22U] &= ((/* implicit */unsigned int) ((int) ((((var_4) <= (2241415589331645992LL))) ? (5045706560903062082LL) : (((/* implicit */long long int) (+(arr_14 [i_5])))))));
    }
    var_22 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) min((-256228202), (((/* implicit */int) (signed char)85))))) : (((((/* implicit */_Bool) var_2)) ? (-2089802682439735831LL) : (((/* implicit */long long int) var_13))))))));
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            {
                arr_25 [i_6] [i_6] &= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (max((((/* implicit */long long int) var_0)), (arr_23 [i_7] [i_6] [i_6]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 256228202)) ? (((/* implicit */int) var_11)) : (arr_15 [i_6])))))));
                var_23 &= ((/* implicit */unsigned short) max((max((arr_19 [i_6] [i_6]), (((/* implicit */unsigned long long int) (unsigned short)34923)))), (((/* implicit */unsigned long long int) (signed char)-112))));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    var_24 &= min((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-66))))) ? (((((/* implicit */_Bool) var_3)) ? (6565524714572033896ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-4010703225668015950LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) arr_23 [(short)9] [i_7] [i_6])) ? (var_7) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-17)) + (2147483647))) << (((((-2089802682439735831LL) + (2089802682439735834LL))) - (3LL)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 4; i_10 < 15; i_10 += 2) 
                        {
                            var_25 ^= ((/* implicit */unsigned long long int) var_1);
                            arr_33 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_11))))))) : (((unsigned long long int) max((((/* implicit */unsigned long long int) var_5)), (arr_32 [i_6] [i_7] [i_8] [i_9] [i_10]))))));
                            var_26 ^= ((/* implicit */unsigned int) arr_24 [i_6] [i_8]);
                        }
                        var_27 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((short) var_4))) ? (min((var_9), (((/* implicit */unsigned long long int) (unsigned short)34934)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (0) : (((/* implicit */int) var_12)))))))));
                    }
                }
                arr_34 [i_6] &= ((/* implicit */int) ((unsigned long long int) (signed char)-120));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) var_9))))), (max((var_8), (((/* implicit */short) var_0))))))) ? (min((((/* implicit */int) var_6)), (256228208))) : ((-(((var_12) ? (((/* implicit */int) (unsigned short)34933)) : (var_3)))))));
}
