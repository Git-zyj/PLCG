/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241271
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
    var_10 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */long long int) min((var_1), ((!(((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1]))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 14; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) ((min((9010314609330617144LL), (-2635105847469413680LL))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)43))))))))) : ((-(((/* implicit */int) arr_2 [(short)4]))))));
                        arr_11 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] [i_0] = ((/* implicit */unsigned char) (~((-((-(((/* implicit */int) arr_6 [i_0] [i_0]))))))));
                        var_13 += ((/* implicit */unsigned int) var_9);
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (unsigned short)34847)) - (34822)))))) ? (((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (short)9188)))))));
    }
    for (short i_4 = 1; i_4 < 14; i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = ((/* implicit */unsigned long long int) min((max((3060348812U), (((/* implicit */unsigned int) max((arr_6 [i_4] [i_4 + 1]), (((/* implicit */unsigned short) var_7))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (arr_10 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1]))))));
        /* LoopSeq 2 */
        for (int i_5 = 2; i_5 < 15; i_5 += 1) 
        {
            var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) var_1)) | (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_4] [i_4]) : (((/* implicit */int) var_7)))))) % (((/* implicit */int) arr_13 [i_4]))));
            var_16 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_16 [i_5 - 2])) : (((/* implicit */int) min((((/* implicit */signed char) var_3)), (arr_4 [i_4] [8U]))))))), (min(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)11708))) : (-105642330937628289LL))), (((/* implicit */long long int) arr_1 [(short)14] [(short)14]))))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 13; i_7 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (-(328579837))))) && (((/* implicit */_Bool) (short)29088))));
                        arr_25 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_6] [i_6])) || (((/* implicit */_Bool) (+(((arr_22 [i_7 + 1] [i_6] [i_4] [i_4] [i_4]) | (((/* implicit */unsigned int) arr_23 [4U] [i_7])))))))));
                        arr_26 [i_4] [i_5 - 1] [i_5] [i_6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1366952662U)))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4] [4] [3] [i_4])) || (((/* implicit */_Bool) arr_7 [i_7 - 1] [i_4 - 1] [i_4]))))) : ((-(((/* implicit */int) ((unsigned short) -328579837)))))));
                    }
                } 
            } 
        }
        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            arr_30 [i_4] = max((((/* implicit */int) ((short) ((long long int) arr_6 [i_4] [i_4])))), ((-(((/* implicit */int) var_8)))));
            var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((arr_22 [i_4 + 1] [i_4 + 2] [i_4 - 1] [i_4 - 1] [(_Bool)1]) < (arr_22 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4])))), (((((/* implicit */_Bool) (signed char)40)) ? (arr_22 [i_4 - 1] [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 + 2]) : (arr_22 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4])))));
            var_19 &= ((/* implicit */short) var_5);
        }
        arr_31 [i_4] = ((/* implicit */unsigned short) 2779746882029435313ULL);
    }
    /* vectorizable */
    for (short i_9 = 1; i_9 < 14; i_9 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [12LL])) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) arr_24 [i_9 + 2] [i_9 + 2] [i_9]))))) ? (arr_7 [i_9] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (!(var_0)))))));
        arr_34 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [(short)10] [i_9] [i_9] [i_9])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))) / (5175835909743484662LL))) : (((/* implicit */long long int) arr_19 [i_9] [i_9 + 1] [(unsigned short)2]))));
        /* LoopSeq 1 */
        for (short i_10 = 1; i_10 < 14; i_10 += 1) 
        {
            var_21 &= ((/* implicit */_Bool) ((short) arr_36 [i_10 + 1] [i_10 - 1]));
            var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_15 [i_9] [i_10])) ? (-2635105847469413676LL) : (((/* implicit */long long int) arr_28 [i_10 + 2]))))));
        }
        var_23 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) 1904101086U)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (short)14706)))) & (((((/* implicit */_Bool) arr_23 [i_9] [i_9])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)25425))))));
    }
    for (short i_11 = 0; i_11 < 19; i_11 += 3) 
    {
        arr_39 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_37 [i_11]))) - (((((/* implicit */_Bool) 2635105847469413683LL)) ? (((/* implicit */int) arr_38 [i_11])) : (((/* implicit */int) var_5))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? ((-(((/* implicit */int) var_0)))) : (((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_37 [i_11]))))))) ? (((/* implicit */int) max(((short)21354), (((/* implicit */short) (_Bool)0))))) : (((/* implicit */int) ((short) (short)21354)))));
    }
}
