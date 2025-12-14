/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190725
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_10 *= ((unsigned int) ((0U) | (4294967295U)));
        var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1815615408U), (3254286558U)))) ? (((((/* implicit */_Bool) 1010620297U)) ? (var_8) : (arr_0 [i_0]))) : (min((arr_0 [i_0]), (arr_0 [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2188656501U))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (max((max((var_0), (arr_2 [9U]))), (max((arr_1 [i_0] [i_0]), (var_7))))));
    }
    var_12 = (+(min((((unsigned int) 2188656501U)), (var_1))));
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((unsigned int) min((arr_4 [0U] [i_1]), (arr_2 [i_1]))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                arr_9 [i_1] = ((unsigned int) (!(((/* implicit */_Bool) min((var_8), (var_2))))));
                var_14 = ((((/* implicit */_Bool) (+(4294967295U)))) ? (((unsigned int) arr_3 [i_3])) : ((-(3592861102U))));
                var_15 = ((unsigned int) ((arr_2 [i_3]) + (arr_3 [i_1])));
                var_16 += (((-(((unsigned int) arr_8 [7U] [i_2] [i_1])))) ^ (var_1));
            }
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                var_17 = arr_4 [i_1] [i_1];
                arr_12 [i_1] [i_1] [i_1] = ((min((((unsigned int) arr_11 [i_1] [i_1] [i_1] [i_1])), (1462347012U))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (2832620283U)))) ? (((1707198114U) ^ (2434314194U))) : (20U))));
                arr_13 [0U] [0U] [i_1] = max((((1652244809U) ^ (332841467U))), (1475133647U));
                var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2106310794U)) || (((/* implicit */_Bool) 659076172U))));
            }
            arr_14 [i_1] [i_1] [i_1] = arr_11 [10U] [10U] [i_2] [i_1];
        }
        for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (min((arr_10 [i_1] [i_5] [4U]), (((unsigned int) ((var_3) >> (((arr_10 [i_5] [i_5] [6U]) - (1075206550U))))))))));
            arr_17 [i_1] [i_1] [i_1] = (-((-(min((457057315U), (390962232U))))));
            arr_18 [i_1] [i_1] [i_5] = ((unsigned int) min((((unsigned int) arr_0 [i_1])), (((unsigned int) arr_10 [9U] [10U] [i_1]))));
        }
    }
    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 2832620283U))))))));
    /* LoopSeq 2 */
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_21 = (~(((min((arr_20 [i_6]), (var_0))) & (max((arr_19 [6U] [i_6]), (4294967295U))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (max((((((/* implicit */_Bool) max((2127179823U), (332841480U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2037228744U)))))) : (((unsigned int) 158441726U)))), (((448U) ^ (arr_19 [i_6] [i_6])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
        {
            arr_24 [i_6] [i_6] [i_6] = arr_22 [i_6] [i_7] [i_7];
            var_23 = ((unsigned int) (!(((/* implicit */_Bool) var_9))));
        }
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
        {
            arr_28 [i_8] = (~(min((arr_23 [i_6]), (arr_23 [i_6]))));
            var_24 = ((((/* implicit */_Bool) ((4294967295U) ^ (arr_22 [i_6] [i_8] [i_8])))) ? (max((arr_25 [1U] [i_8]), (arr_22 [i_6] [i_8] [i_8]))) : (max((2127179837U), (arr_25 [i_6] [i_6]))));
            arr_29 [10U] |= max((((((/* implicit */_Bool) (-(arr_19 [10U] [i_8])))) ? (arr_21 [i_8]) : (min((2832620275U), (var_4))))), (max((3283080335U), (arr_20 [18U]))));
        }
        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
        {
            arr_32 [i_9] = arr_22 [i_9] [i_6] [i_6];
            var_25 = ((unsigned int) min(((-(1411472869U))), (((unsigned int) var_6))));
            arr_33 [i_6] [i_9] [i_9] = var_3;
            arr_34 [i_6] = ((((/* implicit */_Bool) ((((unsigned int) 2188656486U)) ^ (0U)))) ? (1540248042U) : (((((var_0) ^ (var_0))) ^ (1540248017U))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_10 = 3; i_10 < 18; i_10 += 3) 
        {
            var_26 = ((/* implicit */unsigned int) max((var_26), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [15U])) ? (4234670183U) : (1267062168U)))) ? (((((/* implicit */_Bool) var_0)) ? (arr_23 [i_10]) : (arr_22 [i_10] [i_6] [i_6]))) : (((((/* implicit */_Bool) arr_25 [i_6] [i_6])) ? (arr_20 [i_6]) : (var_1))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_10 - 3] [i_10]))))))))));
            var_27 = arr_22 [i_6] [i_10 - 2] [i_10 - 2];
            var_28 = ((max((853734746U), (min((60297137U), (1935514693U))))) ^ ((-(((arr_30 [i_10]) ^ (var_2))))));
            var_29 = ((((/* implicit */_Bool) (-(max((arr_30 [16U]), (var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_10 - 3] [i_10] [i_10 - 3])))))) : (((unsigned int) var_4)));
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_12 = 1; i_12 < 16; i_12 += 3) 
            {
                arr_43 [i_11] [i_12] = (~(((unsigned int) arr_25 [11U] [3U])));
                var_30 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_12 + 1]))));
            }
            for (unsigned int i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                var_31 ^= ((unsigned int) 4294967295U);
                var_32 = ((arr_31 [i_6] [i_11] [i_11]) & (1921435192U));
            }
            for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
            {
                arr_51 [i_6] [16U] = ((unsigned int) arr_49 [i_6] [i_11] [i_14]);
                var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6])) ? (4143868211U) : (var_5))))));
                var_34 = ((((/* implicit */_Bool) 3605770348U)) ? (2455313028U) : (1011886960U));
                /* LoopSeq 3 */
                for (unsigned int i_15 = 0; i_15 < 19; i_15 += 4) 
                {
                    arr_54 [i_15] [i_14] [i_11] [i_6] = (((~(2018554868U))) ^ (var_9));
                    var_35 = (~((+(var_6))));
                }
                for (unsigned int i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((((unsigned int) arr_52 [2U] [i_11] [17U] [i_16])) ^ (((((/* implicit */_Bool) arr_25 [i_11] [i_14])) ? (arr_20 [i_6]) : (arr_53 [i_6] [14U] [i_14])))))));
                    var_37 *= ((unsigned int) 1638863464U);
                }
                for (unsigned int i_17 = 0; i_17 < 19; i_17 += 3) 
                {
                    var_38 &= (-(1999898655U));
                    arr_59 [i_17] = ((unsigned int) 41141270U);
                }
            }
            arr_60 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 4253826026U)))) || ((!(((/* implicit */_Bool) var_6))))));
        }
    }
    for (unsigned int i_18 = 0; i_18 < 14; i_18 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_19 = 0; i_19 < 14; i_19 += 2) 
        {
            var_39 |= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            var_40 -= ((unsigned int) arr_55 [i_19] [i_18] [13U] [i_18]);
        }
        for (unsigned int i_20 = 2; i_20 < 12; i_20 += 3) 
        {
            var_41 ^= 4128228904U;
            var_42 &= ((unsigned int) arr_52 [i_20] [i_20] [i_18] [i_18]);
            var_43 *= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (3186458365U) : (arr_41 [i_18] [i_18] [i_18])))) ? (((var_1) / (var_6))) : (692931747U))));
        }
        for (unsigned int i_21 = 4; i_21 < 13; i_21 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_22 = 0; i_22 < 14; i_22 += 3) 
            {
                arr_75 [i_18] [i_18] [i_21] [i_22] = min((min((((unsigned int) var_2)), (((((/* implicit */_Bool) 3502447282U)) ? (arr_45 [i_18]) : (2085841165U))))), ((-(2373532094U))));
                var_44 = ((unsigned int) ((((/* implicit */_Bool) var_1)) ? ((-(var_7))) : ((-(993753322U)))));
            }
            var_45 = arr_58 [0U] [i_21] [2U] [0U] [i_21];
        }
        var_46 = ((((/* implicit */_Bool) 0U)) ? (809412073U) : (4099722656U));
    }
}
