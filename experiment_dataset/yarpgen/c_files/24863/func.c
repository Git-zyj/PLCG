/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24863
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_3))));
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((-(12118247525365447291ULL))), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) (short)-9764))))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_16 += ((/* implicit */int) min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-9764))))) | (min((arr_0 [i_0]), (arr_2 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) -1247086843)), (67063369U)))))))));
        var_17 ^= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (((((/* implicit */unsigned long long int) 765043509627490490LL)) - (12118247525365447287ULL))))) ? ((+(var_3))) : (((((((/* implicit */_Bool) arr_1 [(signed char)6] [i_0])) ? (3461847984U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))))) >> (((((/* implicit */int) ((unsigned short) var_11))) - (133)))))));
        var_18 = ((/* implicit */unsigned int) 18272487247910738334ULL);
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 19; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_10)) + (((/* implicit */int) (unsigned char)133))))));
        var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_0 [i_1 + 3])));
        var_20 = ((/* implicit */short) ((arr_0 [i_1 - 1]) >> (((((unsigned int) -765043509627490491LL)) - (988770114U)))));
        var_21 &= ((/* implicit */int) arr_1 [i_1] [i_1 + 2]);
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((var_5) == (((var_1) >> (((arr_7 [(signed char)0]) - (3257931177314193656ULL))))))))));
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1 + 1]))));
        }
        for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) 1940102674U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 842313259U)))))) : (var_13))))));
            var_24 = ((((((/* implicit */_Bool) 8338285091601956286ULL)) ? (arr_0 [7ULL]) : (arr_10 [i_1] [i_3] [i_3]))) | (arr_7 [i_1 + 2]));
            arr_13 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_11 [i_1 + 3])) | (arr_0 [i_1 + 1])));
        }
    }
    for (signed char i_4 = 1; i_4 < 19; i_4 += 1) /* same iter space */
    {
        var_25 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)120)) | (((/* implicit */int) (((-(arr_7 [i_4]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_4 - 1]) == (arr_4 [i_4]))))))))));
        var_26 = ((/* implicit */signed char) ((unsigned int) ((-765043509627490491LL) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
        arr_18 [i_4] = ((/* implicit */unsigned long long int) 2366991628U);
        arr_19 [i_4] = ((/* implicit */unsigned int) ((short) ((arr_10 [i_4] [i_4] [i_4 - 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
    }
    for (signed char i_5 = 1; i_5 < 19; i_5 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)59)) ? (min((765043509627490490LL), (((/* implicit */long long int) (short)-717)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)-717), (((/* implicit */short) (unsigned char)36))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9764))) : (((199347331U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)15506))))))))));
        var_28 ^= ((/* implicit */unsigned int) ((unsigned long long int) arr_4 [i_5 + 3]));
        var_29 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2772022958U)) ? (((/* implicit */unsigned long long int) arr_15 [i_5])) : (12118247525365447291ULL)))) ? (arr_15 [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
        arr_22 [1LL] = ((/* implicit */unsigned char) ((18272487247910738334ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)719)))));
        /* LoopSeq 4 */
        for (signed char i_6 = 3; i_6 < 21; i_6 += 3) 
        {
            var_30 = ((/* implicit */unsigned int) min((var_30), (max((((((/* implicit */_Bool) ((4294967289U) | (199347331U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 1940102674U)) != (-7387526674499572846LL))))) : (((((/* implicit */_Bool) 6039431742893138895ULL)) ? (3714807520U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5] [i_6])) ? (((/* implicit */int) max((arr_21 [i_5 + 3]), (((/* implicit */short) (unsigned char)119))))) : (((/* implicit */int) ((signed char) arr_0 [6]))))))))));
            var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 524256U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [8ULL])))) : (((((/* implicit */unsigned long long int) -1891085759)) - (18446744073709551595ULL))))))));
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (short)-17662)))))), (((unsigned long long int) arr_14 [i_5 - 1]))))));
            var_33 = ((/* implicit */int) min((14823860288089880496ULL), (18272487247910738345ULL)));
        }
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (-(((unsigned int) var_5)))))));
            arr_27 [i_5] [19LL] [i_5] = ((/* implicit */signed char) arr_4 [i_5]);
        }
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
        {
            var_35 -= ((/* implicit */long long int) min((((unsigned long long int) (unsigned char)135)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)224))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)6)))))) : (((((/* implicit */_Bool) arr_10 [i_5 + 3] [i_5 + 3] [i_5 + 3])) ? (7731556148029495645LL) : (((/* implicit */long long int) arr_1 [i_5] [i_5])))))))));
            var_36 *= ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */unsigned long long int) -7731556148029495622LL)) ^ (16711881409455837958ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5] [8ULL]))));
        }
        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
        {
            arr_34 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) - ((~(((/* implicit */int) arr_31 [i_5] [i_9]))))))) ? (((unsigned int) arr_33 [i_9] [i_5 + 3] [i_5])) : (((unsigned int) arr_1 [i_5 - 1] [i_5 + 2]))));
            var_37 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32359)))))) | (((unsigned int) arr_20 [6ULL] [6ULL]))))), ((-(min((7731556148029495622LL), (((/* implicit */long long int) 4294967293U))))))));
            var_38 ^= ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) arr_4 [i_9])))))), (min((((/* implicit */unsigned short) ((short) 7875908954126735722ULL))), (min(((unsigned short)42083), (((/* implicit */unsigned short) arr_21 [i_5]))))))));
        }
    }
    /* LoopSeq 1 */
    for (int i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        arr_37 [i_10] = (unsigned char)31;
        arr_38 [i_10] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_10] [i_10]))) % (arr_36 [i_10] [i_10]))))));
    }
}
