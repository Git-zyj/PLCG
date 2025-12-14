/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225904
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((-(var_1)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_14 -= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_0 [i_0]))))) * ((+(arr_2 [10]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))));
            var_16 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [(signed char)9] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1 - 2] [i_1 + 1]))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) & (var_4))) | (((/* implicit */unsigned long long int) arr_1 [i_1 + 2]))))));
            var_17 = ((/* implicit */int) (((!(var_10))) ? (((/* implicit */long long int) (((((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 1])))) + (2147483647))) << ((((((-(arr_1 [i_1 + 1]))) + (7970693975301940140LL))) - (9LL)))))) : (-1LL)));
        }
        for (long long int i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
        {
            arr_7 [i_0] [i_2] [i_0] = ((/* implicit */short) (~((~(max((-1LL), (((/* implicit */long long int) arr_6 [i_0]))))))));
            arr_8 [5LL] = ((/* implicit */unsigned short) (+(((min((arr_1 [i_2]), (((/* implicit */long long int) var_10)))) / (((((/* implicit */_Bool) 2LL)) ? (-5LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2] [6ULL])))))))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [9LL] [i_0]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_5 [i_2] [i_0] [i_0]))))))))));
        }
        for (long long int i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 5LL)) || (((/* implicit */_Bool) (short)14214))));
            var_20 = ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 362968541U))))) : (((/* implicit */int) ((arr_5 [i_0] [i_0] [i_0]) > (arr_5 [i_3] [i_3] [i_0])))));
            var_21 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (((arr_2 [i_3]) * (arr_9 [i_0]))))))));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                arr_16 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) 2393557381U)), (5LL))) << (((((((/* implicit */_Bool) 4161476604U)) ? (1298116130) : (((/* implicit */int) (signed char)-118)))) - (1298116119)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_3] [i_4])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_2)) ? (arr_6 [i_0]) : (((/* implicit */int) ((((/* implicit */_Bool) 5LL)) || (((/* implicit */_Bool) 1901409914U))))))), (((/* implicit */int) var_0))));
            }
            for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 4) 
            {
                var_23 = ((/* implicit */short) ((((/* implicit */int) max((arr_18 [i_0] [i_3] [i_5 + 3]), (arr_18 [(unsigned short)2] [i_0] [i_5 + 3])))) * (((((/* implicit */int) arr_18 [i_0] [i_3] [i_5 - 1])) & (((/* implicit */int) arr_18 [i_0] [4U] [i_5 + 3]))))));
                arr_20 [i_0] [(unsigned short)6] [i_5 + 2] [i_5] = ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (1767775503)))), (((((/* implicit */_Bool) arr_6 [i_0])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5 + 2] [i_3]))))))));
            }
            arr_21 [i_0] [10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (arr_5 [(signed char)2] [5LL] [6LL])))), ((~(var_5))))))));
        }
        var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)53668))))) % ((+(var_2)))));
        var_25 = ((/* implicit */unsigned short) var_4);
        var_26 -= ((/* implicit */short) max((((((/* implicit */int) var_9)) * (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_11 [i_0])))))), (((((arr_19 [i_0] [i_0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [i_0])))) >> (((/* implicit */int) ((var_5) < (arr_9 [i_0]))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */short) arr_19 [i_6] [i_6]);
        arr_26 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(arr_17 [i_6] [i_6]))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5700))) - (1901409914U)))))) ? (((((/* implicit */_Bool) arr_15 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_6] [i_6]))) : (max((((/* implicit */long long int) var_8)), (-5LL))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((-626861515) >= (((/* implicit */int) arr_24 [i_6] [i_6]))))))))));
    }
    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
}
