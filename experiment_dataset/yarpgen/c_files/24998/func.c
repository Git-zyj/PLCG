/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24998
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) min((11551324731924686169ULL), (((/* implicit */unsigned long long int) -271563476))))) || (((/* implicit */_Bool) var_10))))), (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) arr_1 [i_0])) - (3655)))))));
        arr_2 [i_0] = ((/* implicit */int) var_5);
    }
    var_19 = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) (!(((/* implicit */_Bool) 271563475))))), ((~(var_6)))))));
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_6 [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) / (var_15))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1])))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned short)39075))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_8)))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (arr_0 [i_1])));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_23 -= ((long long int) ((((((/* implicit */int) var_16)) << (((-107742411) + (107742418))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        arr_10 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_2] [i_2]))))) != ((+(((long long int) 1524348995))))));
        var_24 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((arr_1 [i_2]), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)26472)) <= (((/* implicit */int) (unsigned short)53713)))))))), (min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [4LL])) > (((/* implicit */int) (unsigned short)3615))))), (min((((/* implicit */long long int) var_11)), (var_12)))))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2])))))));
        arr_12 [i_2] = ((/* implicit */signed char) (-((~(arr_8 [i_2])))));
    }
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_17) % (((/* implicit */long long int) arr_15 [i_3] [i_4] [11LL]))))) ? (min((arr_15 [i_3] [i_4] [i_5]), (((/* implicit */unsigned int) (unsigned short)39801)))) : (((((/* implicit */_Bool) -1764294251)) ? (arr_15 [i_3] [i_3] [i_3]) : (arr_15 [i_5] [i_4] [i_3])))));
                    var_26 -= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_5])) != (max((((/* implicit */int) (unsigned short)61939)), (-1291033593))))))));
                    arr_19 [i_5] [i_5] = ((/* implicit */unsigned char) 4065482486764965449ULL);
                    var_27 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) 503573948U)) ? (((/* implicit */int) arr_18 [i_3] [i_3] [10ULL] [i_5])) : (((/* implicit */int) arr_18 [i_3] [i_4] [i_4] [i_5])))) | (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26115))))), (-1291033593)))));
                }
                for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    var_28 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)3598)), (((((/* implicit */int) arr_14 [i_4])) % (((/* implicit */int) arr_14 [i_6]))))));
                    arr_23 [i_3] [i_4] [i_6] = ((/* implicit */int) (unsigned short)1934);
                }
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    arr_27 [i_7] [(signed char)6] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_14 [i_4])), ((-(((/* implicit */int) ((arr_16 [6ULL] [i_4] [i_7]) <= (var_17))))))));
                    var_29 -= ((/* implicit */long long int) min((((arr_8 [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7]))))), (((/* implicit */unsigned long long int) (~(409391889U))))));
                }
                for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    var_30 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) min((var_13), ((unsigned short)34784))))) % (min((var_6), (((/* implicit */long long int) 271563475)))))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44347)))));
                    arr_30 [i_3] [9U] [i_8] [i_8] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_29 [i_4] [1LL])) ? ((~(((/* implicit */int) (unsigned char)215)))) : ((+(arr_25 [i_8] [i_8]))))) + (2147483647))) >> (((6018651384153603274ULL) - (6018651384153603248ULL)))));
                    var_31 -= (((~(min((1673832706U), (((/* implicit */unsigned int) arr_14 [i_3])))))) << (min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (arr_24 [i_8])))), (((2722573838U) >> (((9353759946930375439ULL) - (9353759946930375420ULL))))))));
                }
                arr_31 [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_28 [i_3] [6LL] [i_3])), (var_14)))))), (((var_9) >= (((/* implicit */long long int) ((/* implicit */int) ((var_15) >= (arr_16 [i_3] [i_4] [i_3])))))))));
            }
        } 
    } 
}
