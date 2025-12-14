/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49096
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
    var_18 = ((((/* implicit */_Bool) var_17)) ? (((var_2) + (((((/* implicit */_Bool) -1615589309)) ? (2147483647) : (-1094865402))))) : (((int) ((((/* implicit */_Bool) 1615589309)) ? (var_0) : (((/* implicit */int) var_1))))));
    var_19 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            arr_15 [i_1] [i_1] = ((/* implicit */_Bool) 1546043079);
                            arr_16 [i_2] [i_2] [4] [i_0] [i_2] [8] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (((((var_14) ^ (arr_6 [i_3] [i_2]))) | (arr_4 [i_0])))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] [i_2] [i_2] = arr_8 [12] [i_2] [(_Bool)1] [i_1] [i_0] [i_0];
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 21; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        {
                            arr_24 [(_Bool)1] [i_1] [i_2] [i_0] [i_6] = ((((/* implicit */_Bool) ((arr_0 [i_6]) / (-1027076277)))) ? (arr_22 [i_5 + 2] [i_1] [i_1] [i_5 + 2] [i_6]) : (min((((((/* implicit */_Bool) -1027076277)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1])) : (arr_0 [i_0]))), (-451603136))));
                            arr_25 [i_6] [i_5] [(_Bool)1] [i_5] [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (1027076297) : (((/* implicit */int) ((1499460028) <= (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_6])))))))) ? (((arr_4 [i_0]) - (((/* implicit */int) var_7)))) : (((/* implicit */int) (_Bool)1)));
                        }
                    } 
                } 
                arr_26 [i_0] [i_1] = ((((/* implicit */_Bool) arr_18 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((var_16) ? (arr_18 [i_0] [11] [i_1] [(_Bool)1] [i_2] [i_2]) : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        {
                            arr_32 [i_2] [18] &= ((((((-1538240420) <= (1615589308))) ? (arr_6 [i_7 - 1] [i_7 - 1]) : (-1615589309))) <= (arr_0 [i_7 - 1]));
                            arr_33 [(_Bool)1] [i_1] [i_2] [i_1] [i_0] = ((int) var_1);
                            arr_34 [i_0] [i_1] [i_2] [i_1] [i_7] [i_2] = ((/* implicit */int) var_7);
                            arr_35 [i_0] [i_1] [i_2] [i_7 - 1] [i_8] = ((/* implicit */_Bool) ((max((arr_18 [i_7 - 1] [17] [i_7 - 1] [i_8] [(_Bool)1] [(_Bool)1]), (arr_18 [i_7 - 1] [i_7 - 1] [i_7 - 1] [7] [i_8] [i_8]))) - (min((1538240419), (arr_18 [i_7 - 1] [(_Bool)1] [i_8] [i_8] [i_8] [6])))));
                            arr_36 [15] [i_1] [15] [i_1] [(_Bool)1] = ((((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1] [i_2] [13] [4] [(_Bool)0])) * (max((((/* implicit */int) arr_11 [i_1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_2])), (1615589309))));
                        }
                    } 
                } 
            }
            arr_37 [i_1] = ((/* implicit */int) ((((((/* implicit */int) ((_Bool) 921452122))) << (((/* implicit */int) ((_Bool) arr_12 [i_0] [i_0] [22] [(_Bool)1] [i_0] [i_0] [i_1]))))) == (-1586763649)));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_40 [i_0] &= ((((/* implicit */_Bool) 2125647945)) ? (((/* implicit */int) (_Bool)1)) : (-1615589310));
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                arr_43 [i_9] [i_10] [i_10] = min((((((/* implicit */_Bool) -1538240411)) ? (arr_41 [i_0] [i_9] [i_9] [i_10]) : (var_3))), (((int) arr_41 [i_0] [i_9] [i_0] [i_0])));
                arr_44 [i_0] [i_9] [i_0] = ((((_Bool) arr_3 [i_0] [i_9] [i_9])) ? (arr_22 [i_0] [6] [i_9] [i_0] [(_Bool)1]) : (((((/* implicit */_Bool) -1264771093)) ? (1264771093) : (1264771092))));
                arr_45 [i_10] [i_10] [i_0] &= ((arr_0 [i_10]) * (((/* implicit */int) (_Bool)1)));
            }
            arr_46 [i_0] [i_9] = ((/* implicit */_Bool) var_4);
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    {
                        arr_54 [i_12] [i_12] [i_12] [i_12] = ((((/* implicit */_Bool) -2147483630)) ? (((((/* implicit */_Bool) arr_1 [i_11])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((var_9) ? (arr_20 [i_13]) : (arr_9 [i_13] [i_13] [i_13] [i_13]))));
                        arr_55 [i_11] [i_13] = ((/* implicit */_Bool) 1639500664);
                    }
                } 
            } 
            arr_56 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_38 [i_0]) ? (((((/* implicit */_Bool) arr_20 [i_0])) ? (314747311) : (((/* implicit */int) var_5)))) : (1702029386)))) || (((/* implicit */_Bool) arr_2 [i_0] [i_11] [i_11]))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_61 [i_0] [10] [i_14] = ((((/* implicit */int) arr_52 [i_0])) - (1615589293));
            arr_62 [i_0] [i_14] = ((/* implicit */int) arr_49 [i_0] [i_14] [20] [i_14]);
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_65 [i_0] = ((/* implicit */_Bool) ((((-1890397461) * (((/* implicit */int) arr_38 [i_0])))) * (((/* implicit */int) var_1))));
            arr_66 [i_0] [i_0] = ((var_12) > (arr_27 [i_0] [i_15] [i_15]));
        }
        for (int i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            arr_69 [i_0] [i_16] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))) >> (((((int) arr_50 [4])) + (1845037843)))))) ? (((arr_31 [i_0] [i_16] [i_0] [18] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_8 [i_16] [i_16] [i_16] [i_16] [i_16] [i_0])) : (((/* implicit */int) arr_31 [i_0] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))) : (((((/* implicit */_Bool) arr_51 [i_0] [i_16])) ? (((/* implicit */int) arr_39 [i_0] [i_0] [i_0])) : (max((((/* implicit */int) var_15)), (1538240392))))));
            arr_70 [i_0] [i_0] = ((((/* implicit */_Bool) ((((int) -1264771067)) | (((1264771093) ^ (-1546043092)))))) ? (((int) arr_42 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_59 [i_0] [i_0] [i_0])) ? (1955346156) : (arr_59 [i_0] [i_0] [i_16]))));
        }
    }
}
