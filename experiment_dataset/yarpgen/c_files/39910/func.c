/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39910
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0 + 3] [11ULL] [i_1 - 1] [i_2] [i_2] [i_3 - 1] = ((/* implicit */unsigned int) min((max((arr_10 [i_0 + 2] [i_1 + 3] [i_3 - 3] [i_3]), (arr_10 [i_0] [i_1 + 1] [i_3 - 3] [3U]))), (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_3 - 2])), (min((var_0), (((/* implicit */unsigned long long int) (short)3405))))))));
                            arr_12 [i_3] [i_2] [i_2] [7U] [7U] [i_0 + 1] = arr_4 [i_0 + 3];
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    arr_15 [i_0] [i_0] [i_4] = ((/* implicit */short) var_7);
                    var_14 += ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [5U]))))), (((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_1 + 3] [i_0 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-3405), ((short)11739))))) > (min((((/* implicit */unsigned long long int) 4294967294U)), (10532539368728450400ULL))))))));
                    var_15 = ((/* implicit */short) max((min((((/* implicit */unsigned int) var_6)), (arr_4 [i_0 - 2]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)10999)))))));
                    var_16 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_0 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [9ULL] [i_1 + 3] [4U] [i_0 + 1])) && (((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 + 1] [i_1 - 2] [(short)0])))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-10999)) || (((/* implicit */_Bool) var_10))))), (arr_10 [i_0 - 2] [i_1 + 2] [i_4] [i_4])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) max((6795015484776688324ULL), (((/* implicit */unsigned long long int) (short)-3405))))) ? (min((14296781627291858235ULL), (((/* implicit */unsigned long long int) (short)-32752)))) : (((/* implicit */unsigned long long int) 1077291146U)))) % (min((((/* implicit */unsigned long long int) arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1])), (arr_2 [i_0 - 2] [i_0 + 2])))));
                        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [9U]))) : (((((/* implicit */_Bool) 0U)) ? (13293328618622530832ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32752))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 2] [i_4])))))) - (((/* implicit */int) var_3)))))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 1149534769U)) ? (11892298956574476177ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11743)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_20 -= ((/* implicit */unsigned long long int) ((short) var_7));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_8 [i_0] [i_1 + 2] [i_4] [i_4] [(short)8]))));
                            var_22 *= (-(var_5));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 3])) != (((/* implicit */int) arr_3 [(short)10] [i_1 - 1]))));
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 11; i_7 += 2) 
                        {
                            var_24 -= ((/* implicit */unsigned long long int) (~(1149534781U)));
                            var_25 = ((unsigned long long int) min((((/* implicit */unsigned int) (short)(-32767 - 1))), (arr_6 [i_1 - 1] [i_4] [i_5])));
                            arr_25 [i_0] [i_4] [i_0 + 3] [11ULL] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))), ((((~(arr_2 [i_4] [i_1 - 2]))) >> (((min((((/* implicit */unsigned long long int) var_7)), (arr_8 [i_0 + 2] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1]))) - (4053040779ULL)))))));
                            var_26 = ((/* implicit */unsigned int) arr_23 [i_7] [i_7 + 1] [i_5] [i_4] [i_4] [(short)7] [i_0]);
                        }
                    }
                }
                for (unsigned int i_8 = 2; i_8 < 8; i_8 += 3) 
                {
                    arr_28 [i_0] [i_8 + 1] = var_4;
                    arr_29 [i_0 + 1] [i_0 + 3] [i_0 - 2] = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_24 [i_0 - 2])) && (((/* implicit */_Bool) arr_24 [i_0 + 2]))))));
                    var_27 = ((/* implicit */unsigned long long int) arr_1 [i_8]);
                    arr_30 [i_1 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3864111699U)) ? (4294967295U) : (17U)));
                }
                for (unsigned long long int i_9 = 3; i_9 < 11; i_9 += 4) 
                {
                    var_28 = ((/* implicit */short) (~(14ULL)));
                    var_29 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-18564))) + ((((+(arr_20 [i_0]))) * (var_9)))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        for (short i_11 = 2; i_11 < 16; i_11 += 4) 
        {
            {
                var_30 = ((/* implicit */short) (-(((((/* implicit */_Bool) 3089022855U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18548))) : (1063880198U)))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 2; i_12 < 18; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned long long int) arr_41 [i_10] [16U] [i_10])), (var_4))))) & (arr_42 [i_11 - 2] [i_11 - 2] [i_12 + 2] [i_12 + 1])))));
                            arr_45 [(short)8] [11ULL] [i_12 + 2] [i_11] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3131294831U)) ? (var_0) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)-15903)) ? (3231087082U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3406))))))))));
                            var_32 = ((/* implicit */unsigned long long int) min((min((((short) (short)13326)), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 3256794044608565224ULL))))))), (((short) 7121441373692779062ULL))));
                            var_33 = ((/* implicit */short) ((17695437888739845969ULL) > (319349461567694872ULL)));
                            arr_46 [i_13] [i_12 + 1] [i_12 + 2] [i_12 + 2] [i_11 + 2] [i_10] = ((/* implicit */short) (~(9600206891113644703ULL)));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_44 [i_11 - 2] [i_11 - 2])))) && (((/* implicit */_Bool) (~(181808741U))))));
            }
        } 
    } 
}
