/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218856
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_2]);
                    var_12 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) < ((~(2878235670984955962ULL))))))) <= (15354314474065939821ULL)));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [(unsigned short)5] [i_0])) ? (((2878235670984955941ULL) - (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32749)) + (((/* implicit */int) (short)-32750)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) -826954508)) & (var_10)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])) != (2878235670984955939ULL)))) : (((/* implicit */int) ((_Bool) var_0))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_3)))), (781206236)))) ? (((((arr_10 [(short)11]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ? (0ULL) : (((/* implicit */unsigned long long int) 826954493)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16713)))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (min((((/* implicit */unsigned long long int) var_4)), (((unsigned long long int) arr_3 [i_3]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 1) 
            {
                {
                    arr_20 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) ((short) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5]))) : (18213820702666741869ULL)))))));
                    arr_21 [i_5] [i_4] [i_3] = ((/* implicit */int) var_3);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            arr_26 [i_6] [i_6] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (unsigned short)40575)), (2987014391020832687ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (1450302880) : (((/* implicit */int) (unsigned char)253)))))));
            var_13 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (arr_16 [i_6] [i_3])));
            arr_27 [i_6] [15U] [i_6] = ((/* implicit */short) -9405423);
            arr_28 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15354314474065939818ULL)) ? (((/* implicit */int) (unsigned short)10779)) : ((-(((((/* implicit */_Bool) 15568508402724595675ULL)) ? (2147483646) : (((/* implicit */int) (_Bool)0))))))));
            arr_29 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((15568508402724595675ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535)))))));
        }
    }
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        arr_33 [i_7] = ((/* implicit */unsigned long long int) (short)21004);
        arr_34 [i_7] = ((/* implicit */unsigned short) var_1);
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_7] [i_7]))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (arr_10 [i_7])))) ? (((((/* implicit */_Bool) var_8)) ? (12910087037436118628ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) (~(arr_1 [i_7]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        arr_37 [(short)1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64528))) & (var_1)));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_24 [i_8])))) ? ((-(((/* implicit */int) (unsigned char)253)))) : (var_9)));
    }
    var_16 = ((/* implicit */unsigned int) var_10);
    var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) var_2)) ? (13194307572072316836ULL) : (((/* implicit */unsigned long long int) -1304572165)))), (((/* implicit */unsigned long long int) min((-1304572176), (2113187031))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
    {
        arr_41 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_9), (((var_9) + (((/* implicit */int) var_3))))))) ? (min((((((/* implicit */_Bool) 4234468776U)) ? (((/* implicit */unsigned long long int) 481281919)) : (15354314474065939818ULL))), (((/* implicit */unsigned long long int) 3879278558725235187LL)))) : (((((((/* implicit */_Bool) arr_40 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) : (arr_39 [i_9] [i_9]))) | (min((((/* implicit */unsigned long long int) 1304572142)), (3686513100603039363ULL)))))));
        var_18 = ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) arr_30 [i_9])))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
    {
        arr_44 [i_10] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10]))) - (3686513100603039363ULL))), (((/* implicit */unsigned long long int) (~(arr_36 [i_10]))))));
        var_19 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_7 [i_10] [i_10])))), (((/* implicit */int) arr_7 [i_10] [i_10]))));
        var_20 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_22 [i_10] [20U] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)112)) : (-9405423)))));
        arr_45 [i_10] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */unsigned long long int) var_10)) : (15568508402724595670ULL))) >> (((/* implicit */int) (unsigned char)58))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_10] [i_10] [i_10]))) : (min((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (1782542266U))), (((/* implicit */unsigned int) (short)-15392)))));
    }
}
