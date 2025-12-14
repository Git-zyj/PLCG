/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47537
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
    var_10 = ((/* implicit */unsigned char) ((((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_11 -= ((/* implicit */unsigned short) arr_2 [(_Bool)1]);
        var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_7)), (((3874221496057818464ULL) / (((/* implicit */unsigned long long int) min((-6534964303308948577LL), (((/* implicit */long long int) (unsigned char)247)))))))));
        var_13 += ((/* implicit */signed char) ((long long int) arr_0 [(_Bool)1]));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_4 [i_0] [i_1] [i_0]))))));
            var_15 = ((/* implicit */unsigned char) arr_3 [16LL]);
        }
        for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_7 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)247))))), (arr_5 [i_0] [i_2])));
            var_16 ^= ((/* implicit */short) arr_1 [i_0] [i_2]);
        }
        for (unsigned int i_3 = 4; i_3 < 21; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                var_17 *= ((((((/* implicit */_Bool) (unsigned char)247)) ? (arr_9 [i_3 - 2] [i_3 + 1]) : (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_3 - 3] [i_3 - 3]))) : (arr_9 [(_Bool)1] [i_4]))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_12 [i_3] [i_4] [i_3] [i_0]) : (arr_12 [i_4] [i_3] [i_3 - 1] [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0]))))) : ((-(var_8)))))));
                arr_15 [i_0] [i_0] = (~(((/* implicit */int) arr_4 [i_3 - 3] [i_3] [i_3 + 1])));
                arr_16 [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)238)) - (((/* implicit */int) (signed char)-2))))) ? (max((arr_9 [i_3 - 4] [i_3 - 1]), (((/* implicit */unsigned long long int) arr_5 [i_3 - 4] [i_3 - 2])))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_8 [i_0] [i_3 - 3] [i_4])))), ((-(((/* implicit */int) arr_8 [i_0] [i_3] [i_4])))))))));
            }
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) -412987911)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))) ^ (((((/* implicit */_Bool) arr_12 [i_0] [(unsigned short)19] [i_3 - 2] [6ULL])) ? (((/* implicit */int) arr_1 [i_3 - 2] [i_0])) : (((/* implicit */int) var_1)))))) ^ (min((((/* implicit */int) (_Bool)1)), (((int) (unsigned char)236)))))))));
            var_19 = ((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)247)))), (((((/* implicit */_Bool) arr_14 [i_3 - 4] [i_3 - 4] [i_3 - 4])) ? (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 2] [i_3 - 3])) : (((/* implicit */int) arr_8 [i_3 - 1] [i_3 + 1] [i_3 - 4]))))));
        }
        var_20 += ((((/* implicit */_Bool) (~(((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_4))))))) ? ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) ((unsigned char) (_Bool)0))))) : (arr_12 [i_0] [i_0] [i_0] [7LL]));
    }
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((/* implicit */signed char) var_3);
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_18 [i_5] [i_5])))) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */long long int) (~(((/* implicit */int) var_4))))) | (((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (arr_17 [i_5]) : (arr_18 [i_5] [i_5])))))));
        var_22 = ((/* implicit */unsigned char) (+(((((arr_18 [i_5] [i_5]) + (9223372036854775807LL))) >> (((/* implicit */int) ((arr_17 [i_5]) < (((/* implicit */long long int) var_3)))))))));
        arr_20 [i_5] = ((/* implicit */_Bool) max((arr_18 [i_5] [i_5]), (arr_17 [i_5])));
    }
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_25 [i_7] [i_6])) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) arr_24 [i_6])))))) + ((~(((/* implicit */int) arr_26 [i_6] [i_6] [i_6])))))))));
            var_24 &= ((/* implicit */unsigned long long int) arr_24 [i_6]);
            var_25 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)31454)))) + (min((((/* implicit */long long int) 3775971537U)), (-7420983865104963259LL))))) / (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            var_26 ^= ((/* implicit */unsigned short) min((((arr_21 [i_7] [i_6]) & (((/* implicit */unsigned long long int) arr_23 [i_6])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_26 [i_7] [i_6] [i_6]))))) ? (((unsigned long long int) arr_25 [11LL] [i_7])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_25 [i_7] [i_6]))))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (unsigned short)20))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_1)))))))))));
            var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */int) arr_24 [i_6])), (var_3))), (((/* implicit */int) ((3775971537U) != (1839992915U))))))) ? (((/* implicit */int) arr_26 [4LL] [(unsigned short)6] [i_8])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_6))) != (((arr_21 [i_6] [i_8]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
            var_29 ^= ((/* implicit */short) ((((/* implicit */int) ((((unsigned long long int) (short)-7755)) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (arr_18 [i_6] [i_6]))))))) * (var_3)));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)14))))) : (arr_18 [i_6] [i_9]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_6] [i_6] [i_9])))))));
            var_31 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned char)8))))))));
            var_32 = ((/* implicit */long long int) (signed char)-7);
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)247)) ? (arr_25 [i_6] [i_9]) : (((/* implicit */int) (signed char)127))));
        }
        var_34 = ((/* implicit */signed char) (+(arr_17 [i_6])));
        var_35 = ((/* implicit */unsigned char) ((_Bool) min((arr_26 [12LL] [i_6] [i_6]), (arr_26 [i_6] [i_6] [i_6]))));
    }
}
