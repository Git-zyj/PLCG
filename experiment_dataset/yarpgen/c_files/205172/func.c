/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205172
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_20 -= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_1] [i_0])))));
            arr_7 [i_1] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((var_19) ? (((/* implicit */unsigned long long int) 2251250057871360LL)) : (arr_0 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_17)))))))));
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)114))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_7) : (((/* implicit */int) (short)28146))))) ? (((/* implicit */int) (!(var_19)))) : ((-(((/* implicit */int) (short)28146)))))) : (((/* implicit */int) min((min((((/* implicit */short) (_Bool)1)), ((short)17188))), (((/* implicit */short) min((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_1])))))))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))));
        }
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min(((!(arr_6 [i_0] [i_0] [i_0]))), (((arr_6 [i_0] [i_0] [i_0]) || (((/* implicit */_Bool) 13531663819461809270ULL)))))))));
        arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4020181960U)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? ((~(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0])), (var_15)))))))) ? ((+(((((/* implicit */_Bool) (unsigned short)7420)) ? (1459899003U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58884))))))) : (((/* implicit */unsigned int) (((((~(((/* implicit */int) var_10)))) + (2147483647))) << (((((((/* implicit */_Bool) 1075915908U)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))))) - (15614260586504858730ULL))))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (((-(-1843005495738832235LL))) + (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) / (arr_11 [i_0] [i_2] [i_2]))))))));
            arr_13 [i_2] [i_2] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))) & (arr_4 [i_2] [i_2] [i_0])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (1843005495738832235LL)))) : ((~(arr_0 [i_0] [i_2])))))));
        }
        for (unsigned short i_3 = 2; i_3 < 23; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+(min((((((/* implicit */int) (short)28157)) * (((/* implicit */int) (unsigned short)58892)))), (((((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_3])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) (unsigned short)59494)))))))))));
            var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) min(((+(var_7))), (((/* implicit */int) arr_6 [i_0] [i_0] [i_3 + 1]))))) ? (((arr_4 [i_3] [i_3 - 2] [i_3]) * (((((/* implicit */_Bool) -9223372036854775805LL)) ? (arr_12 [i_0] [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_3 - 1] [i_3 - 2]))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_19))))))));
        }
    }
    /* LoopSeq 3 */
    for (short i_4 = 3; i_4 < 13; i_4 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */short) (((+(((((/* implicit */_Bool) var_11)) ? (13830235441942770160ULL) : (arr_12 [i_4] [i_4] [i_4]))))) >> (((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) (unsigned short)58892)) - (58889)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4]))) - (arr_12 [i_4] [i_4] [i_4]))))) - (3211ULL)))));
        arr_18 [i_4] = ((/* implicit */signed char) ((1075915880U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6662)))));
    }
    for (short i_5 = 3; i_5 < 13; i_5 += 4) /* same iter space */
    {
        arr_21 [i_5] [i_5] = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (-2147483647 - 1))), ((~(arr_4 [i_5] [i_5] [i_5])))))));
        /* LoopSeq 2 */
        for (int i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            arr_26 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)42416)) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_5 - 3]))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) -1843005495738832235LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-111))))), (arr_25 [i_6] [i_6 - 2] [i_6 - 2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)53030), ((unsigned short)59223)))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)6652)) : (((/* implicit */int) arr_20 [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
            arr_27 [i_6] &= ((/* implicit */unsigned char) ((((min((((/* implicit */int) (short)-32756)), (-2147483628))) % (((/* implicit */int) (unsigned short)35383)))) > (((/* implicit */int) (unsigned short)0))));
            arr_28 [i_6] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)122)) ? (arr_4 [i_5] [i_6] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_5] [i_5]))))))))) >> (((((((/* implicit */_Bool) arr_11 [i_5] [i_5 + 1] [i_6 - 1])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)110))))) : ((+(3219051398U))))) - (4294967173U)))));
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) (unsigned short)31071)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)47176), (((/* implicit */unsigned short) (short)8692)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17139))) % (15038695071316765964ULL)))));
        }
        for (long long int i_7 = 1; i_7 < 13; i_7 += 3) 
        {
            var_27 -= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_15 [i_5] [i_5 + 2] [i_5])) : (var_7)))), (((unsigned long long int) 791858222U)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) (signed char)110)), (3503109088U))))))));
            /* LoopSeq 4 */
            for (unsigned int i_8 = 1; i_8 < 11; i_8 += 4) /* same iter space */
            {
                arr_34 [i_7] [i_7] [i_7] [i_5] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) arr_30 [i_5 - 2] [i_7 + 1] [i_8 + 4])), (arr_12 [i_7] [i_7 - 1] [i_8 + 2])))));
                arr_35 [i_7] = ((/* implicit */signed char) ((((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_32 [i_7] [i_7] [i_5] [i_5])) : (((/* implicit */int) arr_29 [i_5] [i_5 + 2]))))), (((((/* implicit */_Bool) arr_22 [i_5] [i_5])) ? (arr_11 [i_5] [i_5] [i_8]) : (arr_25 [i_5] [i_7] [i_8 - 1]))))) + (9223372036854775807LL))) << (((/* implicit */int) min((((unsigned short) arr_32 [i_5] [i_5] [i_5] [i_8 + 1])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)23120))))))))));
            }
            for (unsigned int i_9 = 1; i_9 < 11; i_9 += 4) /* same iter space */
            {
                arr_39 [i_5] [i_5] [i_7] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(arr_25 [i_5 - 2] [i_7 + 2] [i_9])))), (max((arr_16 [i_7]), (0ULL)))));
                var_28 |= ((/* implicit */int) 3503109088U);
                var_29 = ((/* implicit */_Bool) var_7);
            }
            for (signed char i_10 = 2; i_10 < 14; i_10 += 4) 
            {
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7 + 1] [i_10 - 2])) ? (((/* implicit */int) arr_22 [i_7 + 1] [i_10 + 1])) : (((/* implicit */int) arr_22 [i_7 + 2] [i_10 + 1]))))) ? (((((/* implicit */_Bool) arr_22 [i_7 + 1] [i_10 + 1])) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) arr_22 [i_7 + 2] [i_10 - 2])))) : (((((/* implicit */_Bool) 2109806722)) ? (((/* implicit */int) arr_22 [i_7 + 1] [i_10 + 1])) : (((/* implicit */int) arr_22 [i_7 + 1] [i_10 - 1])))))))));
                arr_43 [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_31 [i_10 - 2] [i_7 + 1] [i_7])) ? (((/* implicit */int) arr_14 [i_10 - 2] [i_7 + 1] [i_5 - 1])) : (((/* implicit */int) (unsigned char)192)))) == (min(((+(((/* implicit */int) var_19)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_40 [i_10] [i_5] [i_5])), (var_10))))))));
            }
            for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                var_31 -= ((/* implicit */unsigned int) min(((+(((((/* implicit */int) (signed char)120)) ^ (((/* implicit */int) (unsigned short)36431)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))))))));
                var_32 = arr_41 [i_11] [i_7] [i_5];
            }
        }
    }
    for (short i_12 = 3; i_12 < 13; i_12 += 4) /* same iter space */
    {
        arr_48 [i_12] = ((((((((/* implicit */_Bool) (unsigned short)56857)) && (((/* implicit */_Bool) 15ULL)))) && ((!(((/* implicit */_Bool) (unsigned short)47176)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_14 [i_12] [i_12 + 1] [i_12])))))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528))) : (73196907009322110ULL))));
        var_33 |= ((((((/* implicit */int) arr_36 [i_12] [i_12])) | (((/* implicit */int) arr_36 [i_12] [i_12])))) & (((((/* implicit */_Bool) arr_36 [i_12 + 2] [i_12 - 2])) ? (((/* implicit */int) arr_36 [i_12 - 1] [i_12 - 1])) : (((/* implicit */int) arr_36 [i_12 + 2] [i_12])))));
    }
    var_34 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) 3219051398U)) ? (-49815364) : (((/* implicit */int) var_5)))) : (min((((/* implicit */int) var_8)), (49815374)))))) && (((((((/* implicit */unsigned int) var_7)) * (2535081484U))) > (((/* implicit */unsigned int) var_13))))));
}
