/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194327
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((/* implicit */int) ((unsigned char) -1))) : (min((((/* implicit */int) ((_Bool) arr_1 [i_0]))), (min((arr_0 [i_0]), (((/* implicit */int) (short)14134))))))));
        var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (4517385276537346485LL) : (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)(-32767 - 1))), (((unsigned int) 6333527904178471929LL)))))));
    }
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 4 */
        for (signed char i_2 = 1; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) 6691308453903161568ULL)))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_1 [i_1]))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((arr_0 [i_1]), (((/* implicit */int) arr_2 [i_2])))) % (((int) -1416395277))))) || (((/* implicit */_Bool) ((((6333527904178471932LL) != (((/* implicit */long long int) ((/* implicit */int) (short)14134))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6333527904178471929LL))))));
        }
        for (signed char i_3 = 1; i_3 < 14; i_3 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_4] [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_5 [i_1 - 2] [i_3] [i_3 + 1])))) ? (((((/* implicit */_Bool) arr_4 [i_3 + 2])) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_5] [i_3 + 1])) : (arr_4 [i_3 + 2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 2] [i_3 - 1])))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            arr_18 [(short)13] [(signed char)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6] [2LL] [i_1])) ? (max((((/* implicit */long long int) 390599755U)), (((long long int) arr_11 [i_1 - 1] [i_1] [i_1])))) : (4980218643719659334LL)));
                            arr_19 [i_1] [i_5] [i_4] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) arr_16 [i_1] [i_1] [i_1] [i_1]);
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (_Bool)1))));
                            var_23 += ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) -8488869767203268326LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-2)))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_24 = min((((/* implicit */signed char) ((arr_8 [i_4]) && (arr_8 [i_3 + 1])))), (arr_10 [i_7] [i_3 + 1] [i_4] [i_5]));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) max((4517385276537346485LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(2LL)))) ? (max((((/* implicit */unsigned int) arr_14 [i_1 + 1] [i_3] [i_4] [i_3])), (arr_9 [i_1] [i_3] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))));
                            arr_22 [i_1] [5LL] [i_3 + 2] [i_4] [(short)0] [i_5] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_5 [i_1 - 2] [i_3 + 2] [i_3 + 1]))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_1] [i_3 - 1])))) : (min((arr_0 [i_1]), (((/* implicit */int) arr_10 [i_3] [i_4] [i_3] [i_7]))))));
                            arr_23 [i_1 + 1] [i_5] [0U] [i_1] = ((/* implicit */unsigned int) min((min(((+(4517385276537346485LL))), ((~(arr_6 [i_4] [i_5] [i_1]))))), (((/* implicit */long long int) arr_14 [i_1 - 1] [i_4] [i_4] [i_5]))));
                        }
                    }
                } 
            } 
            arr_24 [i_1 - 1] = ((/* implicit */signed char) (unsigned short)38261);
            arr_25 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_6 [i_1] [i_1] [14]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1 + 1] [11U] [i_1])))))) ? (((/* implicit */unsigned int) max((arr_0 [i_1]), (arr_4 [i_1])))) : (max((1412923036U), (((/* implicit */unsigned int) (_Bool)1)))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [(_Bool)1] [i_1 - 1])) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 1]))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                for (short i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */short) (signed char)39);
                            arr_39 [10LL] [i_8] [10LL] [i_8] [i_8] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_27 = min((max((((/* implicit */long long int) (unsigned short)41591)), (arr_29 [i_1 - 2]))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_9 [14LL] [(_Bool)1] [i_9])) ? (((/* implicit */int) arr_3 [i_1] [i_11])) : (arr_4 [i_9])))))));
                        }
                    } 
                } 
            } 
            arr_40 [i_1] = ((/* implicit */_Bool) (unsigned char)251);
        }
        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) /* same iter space */
        {
            arr_44 [i_1] [i_1] = ((/* implicit */short) arr_8 [i_1]);
            /* LoopNest 3 */
            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                for (long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_33 [i_1] [i_12] [i_12] [(short)13] [i_15]))));
                            var_29 -= ((/* implicit */unsigned int) (((+(min((7437042182341166107LL), (((/* implicit */long long int) (short)-26011)))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_1 + 1])))));
                        }
                    } 
                } 
            } 
            var_30 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_1 + 1] [i_12]))));
            var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1 + 1] [i_1 - 2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) / (4149657143U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_1] [0LL] [(signed char)14])))))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) max((arr_48 [i_1] [i_1 - 2] [i_12]), (arr_48 [i_1] [i_1 - 1] [i_12]))))));
        }
        arr_54 [i_1 - 1] = ((/* implicit */int) ((arr_8 [i_1 - 2]) ? (arr_52 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)127))))));
    }
    var_32 = ((/* implicit */short) var_11);
    var_33 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) var_3)), (var_2))), (((/* implicit */long long int) max((((/* implicit */int) var_11)), (var_16))))));
    /* LoopSeq 1 */
    for (short i_16 = 0; i_16 < 19; i_16 += 4) 
    {
        arr_58 [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -1097128648)) ? (arr_55 [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_55 [i_16])) || (((/* implicit */_Bool) 536868864ULL)))))))) ? (((/* implicit */int) arr_1 [i_16])) : ((~(((((/* implicit */_Bool) arr_57 [i_16] [i_16])) ? (((/* implicit */int) (unsigned short)58167)) : (((/* implicit */int) arr_57 [i_16] [i_16]))))))));
        var_34 *= ((/* implicit */signed char) arr_56 [i_16]);
    }
    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (_Bool)0))))) ? (var_15) : ((-(var_15)))))))))));
}
