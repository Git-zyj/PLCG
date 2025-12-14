/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38136
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
    var_13 = ((/* implicit */signed char) (unsigned short)23914);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (short)15917))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))));
    }
    for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) (!(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) || (((/* implicit */_Bool) arr_6 [i_1] [i_1]))))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_6 [i_1 - 1] [i_1 - 1]) : (arr_6 [i_1 + 2] [i_1])))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_14 = ((((/* implicit */_Bool) (+(min((120187038U), (((/* implicit */unsigned int) (short)-27581))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_1]))))) : (min((12940308120992651006ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))));
            var_15 -= ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]);
            arr_10 [i_1 - 1] = ((/* implicit */signed char) max(((~(977055596))), (((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))));
            arr_11 [7ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)31313)) | (((/* implicit */int) (_Bool)1))));
        }
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 12; i_4 += 4) 
            {
                for (unsigned int i_5 = 2; i_5 < 12; i_5 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_15 [i_1]))));
                        arr_18 [i_1] [i_5] [i_4] [i_5] = arr_2 [i_1];
                        var_17 = ((/* implicit */unsigned int) 6011598919283536915LL);
                        arr_19 [i_5] [i_1] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_5 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_0 [i_1])))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3])))))) < (min((var_9), (var_9)))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) == (((/* implicit */int) (short)-31314)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_6 = 1; i_6 < 11; i_6 += 3) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */unsigned char) min((((/* implicit */short) var_5)), (arr_21 [i_6 - 1])));
        arr_23 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-14207)))) ? ((~(var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_13 [i_6] [i_6] [i_6])) == (arr_2 [i_6 + 2])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_6 + 2]))) ^ (arr_15 [(signed char)8])))) ? ((~(((/* implicit */int) (short)-1220)))) : (((/* implicit */int) arr_8 [i_6] [i_6] [i_6 - 1])))) : ((~(((/* implicit */int) arr_9 [i_6 + 2] [i_6] [i_6]))))));
    }
    for (unsigned int i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((max((((/* implicit */unsigned int) arr_24 [i_7])), (134217664U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7] [i_7] [i_7]))))) ? ((~(arr_25 [i_7 - 1] [i_7 + 2]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_7] [i_7]))))))))));
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 1844586138525526060ULL)) ? (((((/* implicit */_Bool) arr_14 [i_7 + 1] [i_7 + 1] [i_7])) ? (((/* implicit */int) arr_12 [i_7 + 2] [i_7 + 2])) : (((/* implicit */int) arr_14 [i_7 + 2] [i_7 + 2] [i_7 + 2])))) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_21 [i_7 - 1])))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(-838559932445644565LL))))));
    }
    var_21 = ((/* implicit */signed char) var_3);
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-((-(var_11)))))) ? ((+((-(var_2))))) : (min((min((var_12), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_4)), ((short)-31314))))))));
}
