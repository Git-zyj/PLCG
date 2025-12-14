/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48916
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
    var_13 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = arr_1 [i_0];
        arr_5 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-82)))) * (((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */unsigned int) arr_2 [i_1] [i_1])) : (3490031040U)))));
        arr_9 [i_1] = ((/* implicit */unsigned char) arr_6 [i_1]);
    }
    /* LoopSeq 4 */
    for (short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_2]))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 3490031040U))) | ((~(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-69))))) : ((+((-(18446744073709551591ULL)))))));
            var_16 -= ((/* implicit */unsigned char) (-(var_3)));
        }
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */unsigned int) var_7)) > (arr_10 [i_2] [i_2]))) ? (min((((((/* implicit */_Bool) 3393979419U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)79)) == (((/* implicit */int) arr_8 [8LL]))))))) : (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_2 [i_2] [i_2])) : (8887465506352111313ULL))), (((/* implicit */unsigned long long int) arr_6 [i_2])))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */long long int) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3393979419U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3)))) && (((((/* implicit */int) arr_17 [i_4] [i_4])) < (((/* implicit */int) (unsigned char)139)))))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)214)))))));
    }
    for (int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_5] [i_5]))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((short) arr_17 [i_5] [i_6])))) ? (((/* implicit */int) ((short) (-(arr_16 [i_5] [i_6 + 3]))))) : (((/* implicit */int) max(((unsigned char)145), (((/* implicit */unsigned char) (signed char)-51))))))))));
                    arr_26 [i_5] = ((/* implicit */unsigned short) ((unsigned int) ((arr_16 [i_6 - 1] [i_6 + 2]) % (((/* implicit */long long int) var_7)))));
                    arr_27 [i_5] [i_6 + 3] [i_6] = 9559278567357440302ULL;
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_25 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]) < (arr_25 [i_8] [i_8 - 1] [i_8] [i_8 - 1]))))));
                        var_22 = ((/* implicit */unsigned int) var_2);
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) (short)12564)) << (((((/* implicit */int) (short)4096)) - (4087)))));
                        arr_31 [i_8] [i_5] [i_8] [i_7] [i_5] [i_5] = ((/* implicit */short) var_10);
                    }
                    for (unsigned short i_9 = 3; i_9 < 10; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */int) arr_24 [i_9 - 1]);
                        arr_35 [i_5] [i_6 + 1] [i_7] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_17 [i_9] [i_9 - 2])))), (((/* implicit */int) var_8))))) == (((((/* implicit */_Bool) (signed char)114)) ? (1521523816016994162ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)75)) >= (((/* implicit */int) (signed char)80))))))))));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5] [i_5])) ? (arr_22 [i_5]) : (((/* implicit */int) arr_11 [i_5]))))) ? (((((/* implicit */_Bool) max((arr_23 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 3393979419U)) ? (((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_15 [i_5])))))) : ((~((~(88313752)))))));
        arr_36 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)127))));
        arr_37 [i_5] = ((/* implicit */long long int) (+(((((/* implicit */int) var_1)) * (((/* implicit */int) (signed char)43))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        var_26 = ((/* implicit */unsigned long long int) min(((unsigned char)127), ((unsigned char)20)));
        var_27 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_40 [i_10] [i_10])))), (((/* implicit */int) ((((/* implicit */int) arr_40 [i_10] [i_10])) != (((/* implicit */int) arr_40 [i_10] [i_10])))))));
    }
}
