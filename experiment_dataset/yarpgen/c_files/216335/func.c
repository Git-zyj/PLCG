/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216335
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
    var_17 = ((/* implicit */short) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_4))));
    var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) * ((+(((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (2614217113U)))) ? (((/* implicit */int) ((unsigned short) var_12))) : (((/* implicit */int) ((unsigned short) var_0))))) : (((/* implicit */int) ((unsigned short) var_9)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_19 -= ((/* implicit */unsigned short) ((arr_0 [i_0] [i_0]) && (((/* implicit */_Bool) var_6))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_10))))) <= (1680750183U)));
        var_21 *= ((/* implicit */unsigned long long int) (short)-15355);
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */int) ((short) var_9))), (((((/* implicit */int) arr_2 [i_1])) | (((((/* implicit */int) (short)15355)) ^ (((/* implicit */int) var_6)))))))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_2]) : (arr_3 [i_1]))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_6 [i_2] [i_2])))) ? (max((((/* implicit */unsigned int) (short)-15355)), (1680750183U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [i_1]))))))) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_2] [i_2]))))) & (min((((/* implicit */unsigned int) var_11)), (var_3))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_1] [i_2])))))))));
        }
        for (int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 2; i_4 < 17; i_4 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    var_25 = ((/* implicit */long long int) ((((unsigned int) max((((/* implicit */unsigned short) var_2)), (arr_12 [i_1] [i_3] [i_4] [0U] [i_1] [i_4])))) / (arr_3 [i_3])));
                    var_26 *= ((/* implicit */unsigned short) arr_5 [i_3]);
                }
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    arr_17 [i_1] [(unsigned short)5] [1U] [i_4] [i_6] [i_3] = ((max((((long long int) var_15)), (((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_1]))))))) != (((/* implicit */long long int) ((((1680750183U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)511))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [(unsigned short)5])))))));
                    var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)52)) ? (2147483647) : (((/* implicit */int) (unsigned short)64649)))))))))));
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_28 = ((unsigned short) arr_14 [i_1] [i_3] [i_1] [i_7] [i_1]);
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_1] [i_3])) : (((/* implicit */int) var_4))))))));
                }
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((var_3), (((/* implicit */unsigned int) var_13)))), (((unsigned int) var_10))))) ? (((/* implicit */int) arr_15 [i_1])) : ((~(((/* implicit */int) ((unsigned short) arr_18 [i_1] [i_1] [i_3] [i_4])))))));
            }
            for (short i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_9 = 2; i_9 < 19; i_9 += 4) 
                {
                    arr_25 [i_8] [i_8] [i_9 + 1] = ((/* implicit */unsigned short) ((int) arr_13 [i_9] [i_9] [i_9] [i_9 - 1]));
                    arr_26 [i_1] [i_3] [i_1] [i_9] [i_9] [(signed char)12] |= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_5)) ? (1680750187U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_29 [i_1] [i_3] [(short)19] [(unsigned short)19] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_8] [i_1] [i_1])) ? (var_5) : (((/* implicit */int) arr_24 [(_Bool)1] [(short)10] [i_8] [i_9] [i_10 - 1]))));
                        arr_30 [i_1] [i_8] [8] = ((/* implicit */short) ((signed char) ((unsigned short) var_1)));
                        var_31 = ((/* implicit */signed char) arr_6 [i_8] [i_1]);
                    }
                }
                for (unsigned int i_11 = 1; i_11 < 19; i_11 += 3) 
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) << (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)31))))))));
                    arr_33 [i_1] [i_8] [i_3] [i_11] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) ((var_5) < (((/* implicit */int) (unsigned short)0)))))))));
                    arr_34 [i_8] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_2)) ? (arr_3 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) << (((/* implicit */int) min((arr_5 [6U]), (((/* implicit */unsigned char) var_15))))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 2665981566U)) && (((/* implicit */_Bool) (short)20475)))))))));
                    var_33 = ((/* implicit */unsigned char) var_16);
                }
                var_34 = ((/* implicit */short) ((_Bool) max((arr_6 [i_8] [i_8]), (arr_6 [i_8] [i_3]))));
            }
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                arr_37 [i_1] [i_3] [i_12] [i_12] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_27 [i_12 + 1] [i_12 + 1]), (arr_27 [i_12 + 1] [i_12 + 1]))))));
                arr_38 [i_3] [i_12] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_14 [(short)2] [(signed char)17] [i_12] [i_12] [i_12 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_14 [i_1] [i_3] [i_3] [i_3] [i_12 + 1])))));
                var_35 = ((/* implicit */unsigned short) (((_Bool)1) ? (1680750183U) : (((/* implicit */unsigned int) (-2147483647 - 1)))));
                arr_39 [i_1] [i_3] [i_3] = ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) arr_16 [i_1] [i_3])))))) ^ (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))), (((var_15) ? (arr_21 [(signed char)16] [i_3] [i_12]) : (var_7)))))));
            }
        }
        var_36 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_1])))))));
    }
    for (short i_13 = 0; i_13 < 17; i_13 += 4) 
    {
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */_Bool) (short)15354)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_13] [i_13])) ? (((/* implicit */int) arr_9 [i_13] [i_13])) : (((/* implicit */int) arr_9 [i_13] [0U]))))))))));
        arr_44 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : ((-(((((/* implicit */_Bool) 2614217127U)) ? (((/* implicit */int) arr_9 [(unsigned short)10] [(unsigned short)10])) : (((/* implicit */int) (unsigned short)511))))))));
        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) arr_13 [i_13] [i_13] [i_13] [i_13]))));
        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_13] [(short)0]))))) ? (((/* implicit */int) (signed char)-46)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_13] [i_13])) : (((/* implicit */int) arr_9 [i_13] [i_13]))))));
        /* LoopSeq 3 */
        for (short i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            var_40 = ((/* implicit */unsigned int) var_12);
            arr_48 [i_14] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) << ((((((-2147483647 - 1)) - (-2147483634))) + (42))))) : (((/* implicit */int) max((arr_9 [i_13] [i_14]), (arr_43 [i_13]))))))) || (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_15))))))));
        }
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            var_41 = (short)-20476;
            var_42 = ((/* implicit */_Bool) min((var_42), ((!(((/* implicit */_Bool) arr_52 [i_13] [i_15]))))));
            var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_52 [i_13] [i_15])) | (((/* implicit */int) arr_52 [i_15] [i_15]))));
        }
        for (unsigned int i_16 = 4; i_16 < 16; i_16 += 4) 
        {
            var_44 = ((/* implicit */unsigned int) ((unsigned short) ((_Bool) min((var_7), (((/* implicit */unsigned int) var_15))))));
            var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((((/* implicit */_Bool) 1680750169U)) ? ((((_Bool)1) ? (((/* implicit */int) max(((unsigned short)23489), (((/* implicit */unsigned short) (short)-15365))))) : (((/* implicit */int) (unsigned char)225)))) : (((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) (_Bool)1)))))))))));
            arr_55 [i_13] [i_13] [i_13] = ((/* implicit */signed char) (unsigned short)32433);
            var_46 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32612)) ? (((/* implicit */int) (short)20475)) : (((/* implicit */int) (short)-21090))))) <= (var_7)));
        }
    }
    var_47 = ((/* implicit */signed char) var_1);
    var_48 = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) var_1)))));
}
