/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20786
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (_Bool)1))));
                var_13 = ((/* implicit */unsigned char) ((((arr_4 [i_1 - 1]) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1])))) % (((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1] [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1] [i_1 + 1]))))));
                var_14 = ((/* implicit */short) ((((/* implicit */int) max(((unsigned char)111), (((/* implicit */unsigned char) (_Bool)1))))) & (((/* implicit */int) (unsigned char)237))));
                arr_5 [i_0] |= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                var_15 &= ((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_7 [i_3])))));
                arr_10 [i_2] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_2]))))))) ? (((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) max((arr_9 [i_2]), (arr_9 [i_2])))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_0 [i_3]))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-103)) || (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) (signed char)104)))))));
                var_16 = ((/* implicit */_Bool) max((((signed char) arr_3 [i_2] [i_2])), (((/* implicit */signed char) arr_3 [i_2] [i_2]))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        arr_13 [(unsigned short)8] [(unsigned short)8] = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) (unsigned short)2047)))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_17 [(short)5] = ((/* implicit */_Bool) max((((/* implicit */int) ((short) var_2))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((signed char) arr_14 [i_4]))) : (((/* implicit */int) (unsigned short)63488))))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) var_5)) << (((/* implicit */int) var_7)))), (((/* implicit */int) ((_Bool) var_9)))))) ? (((/* implicit */int) max((min((((/* implicit */short) arr_2 [i_4] [(unsigned char)10])), (var_6))), (min((arr_14 [i_4]), (((/* implicit */short) arr_8 [i_5] [(signed char)13] [i_4]))))))) : (((max((((/* implicit */int) (unsigned char)145)), (var_9))) % (((((/* implicit */int) (unsigned char)33)) << (((/* implicit */int) arr_4 [(unsigned char)17]))))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) max(((short)21264), ((short)-25753)))), ((+(var_3)))))) ? (4778710) : (min((((/* implicit */int) arr_9 [i_4])), (((((/* implicit */_Bool) (short)-4500)) ? (((/* implicit */int) (unsigned char)63)) : (1114305864)))))));
            arr_20 [i_4] [i_4] [i_6] = arr_2 [i_4] [i_6];
            var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((arr_6 [i_4]), (((/* implicit */int) (_Bool)1))))))) || ((_Bool)1)));
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                arr_25 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)81), (((/* implicit */unsigned char) (signed char)16))))) ? (((arr_21 [i_4] [i_6]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) arr_1 [i_4] [i_6])))) : (((/* implicit */int) max((((/* implicit */unsigned short) max((arr_8 [i_4] [i_6] [i_7]), (((/* implicit */signed char) (_Bool)1))))), (max((arr_15 [i_6]), (((/* implicit */unsigned short) arr_11 [i_7])))))))));
                arr_26 [i_6] [i_6] [i_7] [i_7] = ((/* implicit */_Bool) max((((/* implicit */int) ((short) var_2))), (3)));
            }
            var_20 = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */int) arr_16 [i_6] [12] [i_4])), (((((/* implicit */int) (unsigned short)17510)) & (((/* implicit */int) var_2)))))));
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_21 = ((/* implicit */short) ((((((((/* implicit */int) arr_1 [i_8] [i_8])) << (((((/* implicit */int) (unsigned short)2016)) - (2002))))) <= (((arr_3 [i_8] [(signed char)10]) ? (((/* implicit */int) arr_18 [i_8])) : (((/* implicit */int) arr_1 [i_8] [i_8])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_8]))))) : (((/* implicit */int) var_7))));
        var_22 = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_8 [i_8] [i_8] [i_8]))))));
        arr_31 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) (short)-4295)) : (((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_10 = 1; i_10 < 20; i_10 += 2) 
        {
            arr_40 [i_10] [(unsigned char)4] [i_10] = ((/* implicit */short) (unsigned char)94);
            var_23 = ((_Bool) (-(min((-592318804), (((/* implicit */int) (_Bool)0))))));
        }
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (signed char)-39))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [(_Bool)1] [i_9 + 1])) || (((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */int) max((((short) (_Bool)1)), (((/* implicit */short) var_8))))) : (max((((((/* implicit */int) arr_39 [(unsigned char)2] [(unsigned char)2])) & (((/* implicit */int) arr_37 [(short)0] [(short)0])))), (arr_36 [20])))));
        arr_41 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) arr_33 [i_9 + 1]))) : (((((/* implicit */_Bool) arr_39 [(unsigned char)14] [i_9 + 1])) ? (((/* implicit */int) arr_37 [i_9 + 1] [(_Bool)1])) : (((/* implicit */int) (unsigned short)23584))))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            arr_44 [i_9 + 1] = max((arr_36 [i_11]), (min(((+(((/* implicit */int) arr_32 [i_9] [i_11])))), ((-(((/* implicit */int) (_Bool)1)))))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_39 [i_11] [i_9 + 1]), (arr_39 [i_11] [i_9 + 1])))) <= (max((((/* implicit */int) (unsigned char)139)), (173372642)))));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) max((((/* implicit */short) (_Bool)1)), (arr_34 [i_9]))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7659)) || (arr_33 [i_9])))))) : (((((((/* implicit */_Bool) (unsigned short)58400)) ? (((/* implicit */int) arr_43 [i_11])) : (((/* implicit */int) var_0)))) << (((((/* implicit */int) arr_34 [i_9 + 1])) + (17023)))))));
        }
    }
}
