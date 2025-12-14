/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48173
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
    var_11 = ((/* implicit */unsigned long long int) max((var_2), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) -36483639)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */int) (signed char)-12)) * (((/* implicit */int) (signed char)-14)))) : (((arr_1 [i_0]) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (signed char)0)))))) | (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) var_3))))))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((((/* implicit */int) max(((signed char)118), (arr_0 [i_0])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_2)))))))));
        var_14 = ((/* implicit */_Bool) ((arr_1 [i_0]) ? (((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-57)))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_0))), (((/* implicit */unsigned long long int) arr_2 [(signed char)14])))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) : ((~(7556376269218000683ULL))))), (((/* implicit */unsigned long long int) var_6))));
            var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) var_1)))) + (2147483647))) << (((((((((/* implicit */_Bool) (short)-27441)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (_Bool)0)))) + (105))) - (10)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 - 1])) ? (-272044910) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 1])))))));
            arr_9 [i_1] [i_1] &= ((/* implicit */int) max((min((arr_7 [i_2 - 1] [i_2 - 1]), (arr_7 [i_2 + 2] [2]))), (arr_7 [i_2 + 3] [i_1])));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_1])) : (((/* implicit */int) (short)27415))))) % (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) : (var_8)))))) ? (((/* implicit */int) min(((signed char)123), ((signed char)-3)))) : (((((/* implicit */_Bool) 1494873901)) ? (((var_1) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) var_7)))) : (((((/* implicit */int) (signed char)61)) << (((((/* implicit */int) (signed char)-99)) + (106)))))))));
            arr_10 [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)-96))))));
        }
        var_18 = ((/* implicit */signed char) var_8);
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_3] [i_1]))))) ? (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [(unsigned short)5])))) / (((/* implicit */int) (signed char)-13)))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) var_6))))));
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) min(((_Bool)1), ((_Bool)0)))) | ((~(((/* implicit */int) (signed char)-1))))))) ? (((((/* implicit */_Bool) (~(3571016034U)))) ? ((~(arr_11 [i_1] [i_1] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_7))))))) : ((~(arr_11 [i_1] [i_1] [i_1]))))))));
            var_21 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)115)) == (((/* implicit */int) (signed char)-1))))), (var_8)))));
            var_22 = ((/* implicit */int) var_2);
        }
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
        {
            arr_15 [i_4] [i_4] = ((((/* implicit */_Bool) (signed char)92)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-16))))) ? (((/* implicit */int) arr_12 [i_1] [i_4] [i_4])) : (((/* implicit */int) (_Bool)1)))) : (((arr_6 [i_1] [i_1]) ? (((/* implicit */int) arr_6 [i_1] [i_4])) : (((/* implicit */int) arr_6 [i_4] [i_4])))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)16)) ? (arr_14 [i_1] [i_1] [(signed char)0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_12 [(signed char)6] [(signed char)6] [i_4]), (arr_12 [i_1] [6] [i_4]))))) : (min((((/* implicit */unsigned int) arr_7 [12ULL] [i_4])), (1028210296U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-98))))) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (signed char)50))))))))));
        }
    }
}
