/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214264
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                arr_6 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 216786435)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_5 [i_0] [i_0] [i_0])));
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_5 [i_0] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))))))));
                var_18 &= ((/* implicit */unsigned char) 7094617294337555674LL);
            }
            for (int i_3 = 2; i_3 < 15; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    arr_13 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -7094617294337555674LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_4]))) : (var_8))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_10 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7094617294337555674LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-7094617294337555694LL)))) && (((/* implicit */_Bool) 1248931184))));
                }
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3] [i_5])) ? (var_7) : (var_4))) : (((((/* implicit */_Bool) 6577012751351926230LL)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (signed char)-105))))));
                    var_21 += ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)93))));
                    arr_16 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_1 + 2] [i_1 + 2] [i_3 + 2] [i_3 - 1])) / (((((/* implicit */_Bool) var_0)) ? (var_16) : (((/* implicit */int) arr_11 [i_0] [i_0]))))));
                }
                arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) var_7);
            }
            for (signed char i_6 = 2; i_6 < 15; i_6 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) arr_14 [i_6] [i_1] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)114)))) + (2147483647))) >> (((((((/* implicit */int) (unsigned short)1394)) * (((/* implicit */int) var_1)))) - (354068)))));
                var_23 = var_16;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        {
                            arr_28 [i_8] [i_0] [i_6] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_6])) ? (((/* implicit */long long int) var_4)) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 216786432)) || (((/* implicit */_Bool) 107575786))))))));
                            var_24 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)131)) - (((((/* implicit */_Bool) -1248931184)) ? (((/* implicit */int) var_11)) : (var_16)))));
                            var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 9078241132179707555LL)) ? (((/* implicit */long long int) -1829425989)) : (6491087202366143212LL)))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_22 [i_1 - 1] [i_1 - 1] [i_6] [i_6 - 1] [i_6 - 1]))));
            }
            for (signed char i_9 = 2; i_9 < 15; i_9 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */int) arr_11 [i_9 + 1] [i_9 + 2])) >> (((arr_5 [i_9 + 2] [i_1 + 2] [i_1 + 2]) - (2292116144323019732LL)))))));
                arr_31 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_12))) * (((/* implicit */long long int) arr_8 [i_1 - 1] [i_9 - 2]))));
                var_28 -= ((/* implicit */long long int) ((arr_20 [i_1] [i_1]) < (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)23525)))))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 17; i_10 += 3) 
                {
                    for (int i_11 = 2; i_11 < 15; i_11 += 2) 
                    {
                        {
                            arr_37 [i_9] [i_10] [i_9] [i_1] [i_0] = ((/* implicit */unsigned char) ((long long int) (signed char)-1));
                            var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (arr_20 [i_0] [i_0])))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */long long int) var_16)) & (arr_5 [i_0] [i_10] [i_11])))));
                            var_30 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_25 [i_11] [i_11] [i_11] [i_11] [i_11])) <= (((/* implicit */int) var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) arr_30 [i_1] [i_10] [i_11])))))));
                            arr_38 [i_0] [i_0] [i_1] [i_9] [i_10] [i_11] [i_9] = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (signed char)-31)) ? (-5677501632473341371LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-106))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)64394))))));
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) 310410430)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))) : (arr_23 [i_1 - 1])));
        }
        var_32 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)48413))));
        var_33 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) - (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (1248931188) : (((/* implicit */int) var_6))))));
    }
    var_34 = var_7;
    /* LoopSeq 1 */
    for (long long int i_12 = 1; i_12 < 9; i_12 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            var_35 += ((/* implicit */unsigned char) var_8);
            arr_45 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_21 [i_12] [i_12] [i_12] [i_12])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (arr_8 [i_13] [i_12])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_12] [i_12] [i_12] [i_12])) && (((/* implicit */_Bool) var_6))))) : (((((/* implicit */int) (unsigned short)53096)) >> (((((/* implicit */int) (signed char)-106)) + (116)))))))));
            /* LoopNest 2 */
            for (unsigned short i_14 = 1; i_14 < 11; i_14 += 4) 
            {
                for (int i_15 = 0; i_15 < 12; i_15 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
                        {
                            arr_56 [i_12] [i_15] [i_14] [i_15] [i_16] [i_16] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_11)) ? (6491087202366143212LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_12] [i_14] [i_15] [i_16]) <= (((/* implicit */long long int) arr_48 [i_16] [i_15] [i_13] [i_14] [i_13] [i_12])))))))) - (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)42010)) - (arr_29 [i_15]))) >= (((/* implicit */int) (unsigned short)17123))))))));
                            arr_57 [i_12] [i_12] [i_12] [i_12] [i_15] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1248931174)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_16] [i_16] [i_16]))) : (max((((((/* implicit */_Bool) arr_42 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)69))) : (arr_42 [i_13]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_12] [i_13] [i_13] [i_12] [i_12] [i_16])) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) var_1)))))))));
                        }
                        for (int i_17 = 3; i_17 < 10; i_17 += 2) 
                        {
                            arr_61 [i_12] [i_13] [i_14] [i_15] [i_15] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [i_17])) ? (((((/* implicit */_Bool) arr_15 [i_12 + 3] [i_17 - 2])) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_30 [i_12] [i_12] [i_12])) ? (1308622152) : (((/* implicit */int) arr_33 [i_12] [i_12] [i_12] [i_12])))))) : (((/* implicit */int) arr_11 [i_15] [i_12]))));
                            arr_62 [i_12] [i_13] [i_15] [i_15] [i_17] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1841324661)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-25)))), (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) arr_1 [i_15])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_12] [i_13] [i_14] [i_12])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_12]))))) ? (((((/* implicit */int) (unsigned short)1142)) - (((/* implicit */int) arr_40 [i_12])))) : (((((/* implicit */_Bool) arr_27 [i_17] [i_13] [i_14] [i_15] [i_17])) ? (((/* implicit */int) arr_58 [i_15])) : (((/* implicit */int) (unsigned char)5)))))) : (((/* implicit */int) (signed char)-56))));
                            var_36 = arr_34 [i_12] [i_12] [i_12] [i_12] [i_12];
                        }
                        for (unsigned char i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            arr_66 [i_18] [i_15] [i_14] [i_15] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (var_12) : (((/* implicit */long long int) arr_29 [i_12 + 3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_12 - 1])) ? (arr_29 [i_12 + 3]) : (arr_29 [i_12 + 2]))))));
                            arr_67 [i_12] [i_13] [i_15] [i_12] [i_15] [i_15] [i_15] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned short)17142))))) ? (((/* implicit */int) (unsigned short)13459)) : (((((/* implicit */_Bool) (unsigned short)17136)) ? (((/* implicit */int) (unsigned short)38068)) : (-1841324662))))) & (((/* implicit */int) (signed char)127)));
                            var_37 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) 1556281730)) ? (((/* implicit */int) (signed char)96)) : (var_7))) - (((arr_29 [i_12]) - (((/* implicit */int) var_11))))))) : (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_12] [i_12] [i_12] [i_12]))) : (arr_43 [i_12] [i_12]))) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (unsigned short)44754)))))))));
                        }
                        var_38 = ((((((((((/* implicit */_Bool) var_12)) ? (-1) : (((/* implicit */int) arr_54 [i_12] [i_12] [i_12] [i_12] [i_12] [i_15])))) + (2147483647))) >> (((((/* implicit */int) max(((unsigned short)1142), (((/* implicit */unsigned short) arr_50 [i_12] [i_12] [i_14] [i_15]))))) - (1118))))) ^ (((/* implicit */int) (unsigned short)0)));
                        arr_68 [i_12] [i_12] [i_14] [i_14] [i_15] [i_15] = ((/* implicit */signed char) arr_47 [i_13] [i_13] [i_13] [i_13]);
                    }
                } 
            } 
        }
        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((var_4) < (arr_49 [i_12] [i_12 + 2] [i_12 - 1]))) ? (((2578550369765165967LL) % (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_12] [i_12]))))) : (((((/* implicit */_Bool) var_14)) ? (arr_35 [i_12 + 2] [i_12 + 2] [i_12 + 2] [i_12 + 1] [i_12 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2416))))))))));
        arr_69 [i_12] = ((/* implicit */signed char) ((arr_49 [i_12] [i_12] [i_12]) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1351925946)) ? (((/* implicit */int) arr_32 [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_11 [i_12] [i_12]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (signed char)-4))))) : (((/* implicit */int) (signed char)33))))));
    }
    var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((var_8) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34946))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)48413)))) : (min((1351925960), (1351925990)))));
}
