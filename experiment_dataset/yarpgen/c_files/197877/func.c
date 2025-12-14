/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197877
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_13))))))) >= ((-(((/* implicit */int) ((((/* implicit */int) (short)32767)) < (((/* implicit */int) (short)(-32767 - 1))))))))));
    var_15 = ((/* implicit */signed char) (~(min((min((var_3), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((var_9) << (((/* implicit */int) var_0)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (arr_1 [i_0]))) / (max((var_4), (107536558))))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) min(((short)-32763), (((/* implicit */short) var_8)))))))) ^ ((-(3061574351U)))));
                arr_8 [i_1] [i_1] = ((/* implicit */int) max((min((((((/* implicit */int) var_2)) < (((/* implicit */int) (short)-32751)))), ((!(var_0))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) < (2704199412U)))));
                var_18 = min((((min((((/* implicit */int) arr_0 [i_2])), (arr_1 [i_2]))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) arr_2 [i_0]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8557)) + (((/* implicit */int) (short)32767)))))))));
            }
            for (unsigned short i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                var_19 = ((/* implicit */short) max((((((/* implicit */int) (unsigned short)36542)) << (((((/* implicit */int) (unsigned short)56979)) - (56978))))), (min((min((((/* implicit */int) var_7)), (var_9))), (((-1466010131) + (((/* implicit */int) arr_5 [i_0]))))))));
                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((max((520093696U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) min((arr_1 [i_1]), (var_4)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_4 = 1; i_4 < 16; i_4 += 4) /* same iter space */
                {
                    arr_14 [i_4] [i_3 + 3] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) 87371035)) % (-7936816524221832112LL)))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_13 [i_0])))))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) == ((-(var_13)))));
                        var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_7)) + (((/* implicit */int) (_Bool)1))))));
                        arr_17 [i_5] [i_1] = ((/* implicit */_Bool) ((((arr_1 [12U]) / (arr_10 [i_0]))) - (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) / ((-2147483647 - 1))))));
                        arr_18 [i_5] [i_1] [i_3] [i_4] [(unsigned short)5] = ((/* implicit */_Bool) (((+(((/* implicit */int) var_11)))) + ((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-((+(((/* implicit */int) (_Bool)1)))))))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(5970209363379446172LL)))))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) (-((-(arr_10 [i_1])))));
                        var_27 = ((/* implicit */long long int) max((var_27), ((-((+(-2220179084501654971LL)))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32751))) >= (2945316090U)))) * ((+(((/* implicit */int) arr_5 [i_0]))))))));
                        arr_27 [i_1] [i_8] [i_4] [i_8] = ((/* implicit */long long int) (!(((((/* implicit */int) arr_12 [i_0] [i_1] [i_3 - 2] [i_4 + 1])) < (((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_3] [(unsigned short)0] [i_8] [i_8]))))));
                    }
                    arr_28 [i_0] [(unsigned short)11] [(_Bool)0] = ((/* implicit */_Bool) (-(((arr_2 [i_0]) % (((/* implicit */int) var_2))))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_29 = ((((((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_4])) + (((/* implicit */int) arr_19 [i_9] [i_4 - 1] [i_1] [i_1] [i_0] [i_0])))) - ((~(((/* implicit */int) (unsigned char)25)))));
                        arr_31 [i_1] [i_3] |= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (short)-30936)) == (((/* implicit */int) var_5)))))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(2189246564U)))) || ((!(((/* implicit */_Bool) (unsigned char)15)))))))));
                        var_31 = ((/* implicit */unsigned int) (((~(var_3))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [11] [i_1] [i_3])))))));
                        var_32 = (((+(((/* implicit */int) var_2)))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) > (var_10)))));
                    }
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) (+(((((var_4) + (2147483647))) << (((((/* implicit */int) arr_29 [i_10] [i_4 - 1] [i_0] [i_0] [i_0])) - (91)))))));
                        arr_36 [i_10] [i_1] [i_3] = ((/* implicit */long long int) (-(((4955844529764535586ULL) * (((/* implicit */unsigned long long int) 2105720725U))))));
                        arr_37 [i_0] [i_10] [i_3 + 1] [i_4] [i_4] = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)63865)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) ^ (4955844529764535605ULL))))));
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((((/* implicit */int) var_5)) * (((/* implicit */int) arr_25 [i_0] [i_4 - 1] [i_3] [i_1] [i_0])))) * (((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))))));
                    }
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 16; i_11 += 4) /* same iter space */
                {
                    var_35 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((4141038641U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) % (((var_3) + (((/* implicit */unsigned long long int) var_9))))));
                    var_36 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)0))));
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 16; i_12 += 4) /* same iter space */
                {
                    var_37 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 5742693401702827237LL))))));
                    arr_42 [i_0] [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                }
            }
        }
        for (signed char i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */int) (signed char)108)) + (((/* implicit */int) (short)-32744)))), (((/* implicit */int) ((arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_13]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_13] [i_0] [i_0]))))))))))))));
            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_11)), (3061574360U))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)13450)))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)228))))), (max((1472921219U), (((/* implicit */unsigned int) var_5))))))))))));
            arr_47 [i_0] [i_0] = ((/* implicit */unsigned int) min((((((arr_24 [i_13]) - (arr_20 [i_0]))) == (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) var_5))))))), ((!(((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) + (var_10))))))));
            var_40 = ((/* implicit */signed char) (-(((/* implicit */int) min((((arr_2 [i_0]) < (((/* implicit */int) arr_4 [i_13] [i_0] [i_0])))), (((var_9) == (((/* implicit */int) var_0)))))))));
            arr_48 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) < (2220179084501654970LL))) || (((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) (short)-32766))))))))));
        }
        arr_49 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2893433453U))))) == ((-(((/* implicit */int) (_Bool)1)))))))));
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
    {
        var_41 *= ((/* implicit */int) ((((((/* implicit */int) var_8)) / (((/* implicit */int) arr_50 [i_14])))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_14])))))));
        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) (-(((((/* implicit */int) (short)-32765)) ^ (((/* implicit */int) arr_50 [i_14])))))))));
    }
}
