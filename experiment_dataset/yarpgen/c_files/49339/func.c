/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49339
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) arr_4 [i_0] [i_1]);
            var_18 = ((/* implicit */unsigned short) (~(max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) (short)-13700))))));
            var_19 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_1])))) ? (arr_0 [i_1]) : (((arr_0 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            arr_7 [i_0] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_0])) : (var_3))), (((/* implicit */unsigned long long int) min((var_1), (arr_5 [9LL] [i_2])))))) >= (((/* implicit */unsigned long long int) (~(arr_6 [i_0]))))));
            arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)35472)) >> (((((/* implicit */int) (short)-22472)) + (22499))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_2 [i_0] [i_0]))))))));
        }
        for (long long int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_4 = 4; i_4 < 10; i_4 += 3) 
            {
                var_20 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (max((-5434449509515134386LL), (-1LL)))))), (arr_10 [i_0])));
                var_21 = ((/* implicit */short) arr_0 [i_0]);
            }
            for (int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                arr_15 [(unsigned short)5] [i_5] = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned short) 1386179525132534006LL))), (((((long long int) var_9)) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (9223372036854775807LL)))))))));
                var_22 |= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) 6LL)) && (((/* implicit */_Bool) 1000358469855954141LL))))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (-(((((5936796471058455834LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46841))))) & (-3464656553333439045LL))))))));
            }
            arr_16 [(unsigned short)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), (var_7))))) & (min((3844994842743896101LL), (((/* implicit */long long int) arr_5 [i_3] [i_3]))))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)17946))))))))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(min((((unsigned int) arr_1 [i_0])), (((/* implicit */unsigned int) (unsigned short)351)))))))));
        }
        for (long long int i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
        {
            arr_19 [i_0] [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (short)31999))) / (-7247124705480319803LL));
            var_25 ^= ((/* implicit */short) ((unsigned long long int) arr_17 [i_6]));
            var_26 = ((/* implicit */long long int) ((unsigned short) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) var_9)) : (-9207705157788070920LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_6]))))));
        }
        /* LoopSeq 3 */
        for (int i_7 = 2; i_7 < 10; i_7 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                for (short i_9 = 2; i_9 < 12; i_9 += 2) 
                {
                    for (unsigned int i_10 = 2; i_10 < 10; i_10 += 2) 
                    {
                        {
                            arr_31 [i_0] [i_8] [i_0] [i_9 - 2] [i_10] = ((/* implicit */int) ((unsigned short) (short)27112));
                            var_27 ^= ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)10791)), (((((/* implicit */_Bool) ((unsigned long long int) (short)25561))) ? (((/* implicit */int) ((-918833372) != (((/* implicit */int) (short)26659))))) : (((/* implicit */int) (short)-27633))))));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((long long int) var_1)) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30742)))))) ? (((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), ((-(((/* implicit */int) (unsigned short)255))))))) : (((-2005984726881526086LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (unsigned short)63370)) : (((/* implicit */int) (unsigned char)244))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */int) min((((/* implicit */long long int) (-(((/* implicit */int) (short)-21754))))), (min(((~(arr_14 [i_7] [i_7 - 1] [i_7] [i_7 - 1]))), (((/* implicit */long long int) min(((short)-12308), ((short)28672))))))));
        }
        for (short i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            var_30 = ((/* implicit */short) ((int) ((unsigned int) arr_24 [i_0] [i_11] [i_11] [i_11])));
            var_31 = ((/* implicit */long long int) var_1);
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                for (int i_13 = 2; i_13 < 12; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_13 - 2] [i_13])), (var_7)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_13 - 2])))))));
                            var_33 ^= ((/* implicit */short) (unsigned short)65532);
                            arr_41 [i_11] [i_11] [i_14] = ((/* implicit */unsigned short) 15U);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 3) 
        {
            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_2 [i_0] [i_15 - 2])))))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 13; i_16 += 2) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 4) 
                {
                    {
                        arr_49 [i_15] = ((/* implicit */int) arr_6 [i_15 + 1]);
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (-(min((max((((/* implicit */long long int) (short)32750)), (arr_34 [i_17] [i_17]))), (((/* implicit */long long int) (short)15405)))))))));
                        arr_50 [i_0] [i_15 - 1] [i_0] [i_17] [i_17] [i_15] = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */int) ((short) 447582697))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_42 [i_15] [i_15])) : (((/* implicit */int) (short)-18477)))))));
                        arr_51 [i_0] [i_15] [i_15] [i_15] [(short)11] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_12 [i_0])))), ((-((+(((/* implicit */int) (unsigned short)32671))))))));
                        var_36 = ((/* implicit */unsigned long long int) (-(min((((unsigned int) var_10)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))))));
                    }
                } 
            } 
            var_37 = arr_3 [i_15 + 2] [i_15] [i_15 + 2];
        }
    }
    for (short i_18 = 0; i_18 < 22; i_18 += 4) 
    {
        var_38 = ((/* implicit */short) ((12U) << (((((/* implicit */int) (unsigned short)23430)) - (23409)))));
        var_39 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((-8075157519497426692LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)15))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((((/* implicit */long long int) 11U)), (arr_53 [i_18] [i_18])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)21192))) % (4257542644U))));
    }
    var_40 = ((/* implicit */short) ((long long int) (unsigned short)4854));
    var_41 = ((/* implicit */unsigned int) min((((long long int) var_6)), (((/* implicit */long long int) ((unsigned short) min((-13), (var_12)))))));
    /* LoopNest 2 */
    for (int i_19 = 1; i_19 < 16; i_19 += 3) 
    {
        for (unsigned long long int i_20 = 0; i_20 < 19; i_20 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 19; i_21 += 4) 
                {
                    for (unsigned short i_22 = 1; i_22 < 18; i_22 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_23 = 1; i_23 < 16; i_23 += 4) /* same iter space */
                            {
                                var_42 = ((/* implicit */_Bool) (+(arr_53 [i_23 + 3] [i_22 + 1])));
                                var_43 ^= ((/* implicit */short) (-(((/* implicit */int) (!(arr_63 [i_20] [i_20] [i_23 - 1] [i_20] [i_23 + 2] [i_23]))))));
                            }
                            for (long long int i_24 = 1; i_24 < 16; i_24 += 4) /* same iter space */
                            {
                                var_44 = (unsigned short)23414;
                                arr_72 [i_22] = ((/* implicit */long long int) (~(((/* implicit */int) var_14))));
                            }
                            var_45 = ((/* implicit */short) arr_59 [i_19 + 2] [i_19 - 1]);
                        }
                    } 
                } 
                arr_73 [i_20] [i_20] = ((/* implicit */unsigned long long int) arr_64 [i_19] [i_19 - 1] [i_20]);
            }
        } 
    } 
}
