/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194197
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)1))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_4);
                arr_6 [(short)4] &= ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) arr_2 [(unsigned char)6])))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */short) arr_3 [i_0] [i_1] [i_1]))))))), (((/* implicit */int) min((arr_2 [(unsigned char)6]), (arr_2 [(_Bool)1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */int) min((var_15), (((_Bool) var_1))))) * (((/* implicit */int) var_15)))))));
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) max((arr_7 [i_2]), (((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) / (min((((/* implicit */unsigned int) (_Bool)1)), (arr_7 [i_2])))))));
        var_20 = ((((/* implicit */_Bool) min((((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)28)))), (arr_8 [i_2])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */long long int) (+(var_16)))) : (max((((/* implicit */long long int) var_16)), (-8811300310033965172LL))))) : (((/* implicit */long long int) (~(min((var_4), (((/* implicit */unsigned int) var_13))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2]))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_9 [i_2])), (var_13)))) ? (((((/* implicit */long long int) var_10)) ^ (878119164928390098LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (max((arr_13 [i_3]), (((/* implicit */unsigned int) var_15)))))))));
        var_21 *= ((/* implicit */unsigned short) min((arr_12 [i_3]), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)36253)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_13 [i_3])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            arr_20 [i_3] [i_3] [i_3] |= ((/* implicit */_Bool) var_11);
            arr_21 [i_3] [9U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [(unsigned short)5])) ? (((/* implicit */int) arr_11 [i_4])) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_18 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_18 [i_3] [8LL] [i_3]))))));
            arr_22 [i_3] [i_3] = ((/* implicit */unsigned short) ((_Bool) ((arr_9 [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_14 [i_3] [i_3]))));
            var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) -7310855874039932485LL))) ? (var_4) : (var_16)));
            /* LoopSeq 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                arr_25 [(short)15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(_Bool)1])))))) : ((~(arr_14 [(unsigned short)3] [i_4])))));
                var_23 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)36253)))))));
            }
            for (short i_6 = 2; i_6 < 17; i_6 += 1) 
            {
                arr_30 [(_Bool)1] [i_4] [(_Bool)1] [(_Bool)1] |= ((/* implicit */_Bool) ((unsigned short) var_3));
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) arr_23 [i_6] [i_4] [i_4])) : (((/* implicit */int) var_5)))))));
                var_25 &= ((/* implicit */unsigned short) var_6);
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_7] [i_4] [i_6 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_3] [i_6] [i_6 + 1]))) : (arr_28 [i_6 - 2] [i_6 - 2]))))));
                    arr_33 [i_3] [i_3] [i_6] [i_3] = ((/* implicit */unsigned char) (~(var_16)));
                }
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                arr_40 [i_3] [i_3] [13LL] [i_9] &= ((/* implicit */short) arr_14 [i_3] [0LL]);
                var_27 |= ((((/* implicit */_Bool) ((arr_7 [i_9]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_3] [i_8])))))) ? (((/* implicit */long long int) min(((-(((/* implicit */int) arr_9 [i_3])))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) (unsigned char)222))))))) : ((+(max((((/* implicit */long long int) arr_12 [i_8])), (arr_37 [i_3] [(_Bool)1] [i_3] [i_3]))))));
            }
            var_28 = ((unsigned short) (unsigned char)168);
        }
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 2194703682U)) ? (((/* implicit */int) (unsigned short)44923)) : (((/* implicit */int) arr_8 [(short)14]))))), (932228502887870923LL))))));
    }
    for (unsigned int i_10 = 1; i_10 < 12; i_10 += 2) 
    {
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (~((((!(((/* implicit */_Bool) arr_37 [i_10] [i_10] [i_10] [i_10])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_36 [i_10])) : (((/* implicit */int) arr_29 [i_10] [i_10] [i_10] [7U])))) : (((/* implicit */int) var_13)))))))));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)37735)), (878119164928390088LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_9 [i_10 - 1]))))) : ((~(var_10)))));
        arr_44 [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_10] [(short)5] [(short)5]))));
        arr_45 [i_10] [i_10] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_16 [i_10] [i_10])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_10] [i_10] [9U])) || (((/* implicit */_Bool) var_7)))))))));
    }
    var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))) : (8811300310033965177LL))))));
    var_33 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))) == (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))) / (-878506533253368396LL))), (((/* implicit */long long int) var_2))))));
}
