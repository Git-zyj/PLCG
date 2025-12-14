/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20847
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [(_Bool)1] [(_Bool)1] [i_2 + 4] [i_2] [i_2] = ((/* implicit */_Bool) var_8);
                        var_19 = ((/* implicit */unsigned int) (((!((!((_Bool)1))))) ? (arr_11 [5] [i_1] [i_2 - 2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_1 - 2] [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5)))))))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            arr_15 [17ULL] [i_4] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned char) ((long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)10261))))));
                            var_20 *= ((/* implicit */signed char) (!((_Bool)1)));
                        }
                        arr_16 [(signed char)15] [(short)6] [i_0] [i_0] [(unsigned char)18] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-6876183116057615912LL))))), (((/* implicit */long long int) (short)-25602))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28)))));
        var_22 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) 2860168493915002520ULL)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) + (105))))) : (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)41308))))), (var_2))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) 2860168493915002520ULL)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) + (105))) + (29))))) : (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)41308))))), (var_2)))))));
        var_23 = ((/* implicit */long long int) 0U);
    }
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (unsigned char)110)))));
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                for (short i_8 = 2; i_8 < 7; i_8 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_9 = 3; i_9 < 10; i_9 += 1) 
                        {
                            var_25 = min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6]))) >= (-8439342580035147898LL)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))), (((((/* implicit */_Bool) var_16)) ? (min((-1LL), (((/* implicit */long long int) 295461538)))) : (arr_4 [i_6]))));
                            arr_32 [i_6] = (~(((/* implicit */int) arr_14 [i_8 + 2])));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32277)) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) (unsigned char)155))));
                            var_27 = ((/* implicit */unsigned long long int) var_13);
                        }
                        for (unsigned int i_10 = 1; i_10 < 7; i_10 += 1) /* same iter space */
                        {
                            arr_35 [6U] [i_6] [i_7] [i_6] [(_Bool)1] = ((/* implicit */int) (+(min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32759))) : (36028797018832896LL))), (((/* implicit */long long int) (signed char)11))))));
                            var_28 = ((/* implicit */unsigned long long int) 295461538);
                            var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_5])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) arr_23 [i_7] [i_5]))), (-12LL)))) : (min((min((((/* implicit */unsigned long long int) (unsigned short)0)), (var_5))), (((/* implicit */unsigned long long int) min((arr_27 [i_5] [i_7] [i_8] [i_5]), (((/* implicit */long long int) var_13)))))))));
                            var_30 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_3))), (((/* implicit */long long int) arr_7 [i_6] [i_7]))))) ? (max((9223372036854775807LL), (((/* implicit */long long int) (signed char)-54)))) : (var_12)));
                        }
                        for (unsigned int i_11 = 1; i_11 < 7; i_11 += 1) /* same iter space */
                        {
                            var_31 &= ((/* implicit */_Bool) max((-907109492), ((+(((/* implicit */int) (_Bool)0))))));
                            arr_38 [i_6] [5LL] [i_7] [i_6] [i_6] = min((var_1), (((/* implicit */long long int) (((((~(((/* implicit */int) var_8)))) + (2147483647))) << (((((arr_23 [i_5] [i_5]) + (956453620515108673LL))) - (27LL)))))));
                            arr_39 [i_6] [0LL] [i_6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_27 [i_6] [i_8 - 1] [i_7] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) & ((+(-6209660303887573521LL)))));
                        }
                        var_32 = ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) 1896843032U)) : (-4638414430086147156LL));
                    }
                } 
            } 
        } 
        var_33 = min((var_1), (min((arr_23 [i_5] [i_5]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_5] [(short)6])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17))))))));
    }
    for (long long int i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        var_34 = ((/* implicit */short) min(((~(((/* implicit */int) (unsigned char)155)))), (((((/* implicit */int) (unsigned char)73)) >> (((907109491) - (907109478)))))));
        /* LoopSeq 1 */
        for (unsigned char i_13 = 3; i_13 < 16; i_13 += 3) 
        {
            var_35 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((short) arr_6 [i_13] [i_12]))), ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_5))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
            arr_47 [i_13] [i_13 + 3] [i_12] = ((/* implicit */_Bool) (-(min((arr_11 [i_12] [i_12] [i_12] [i_12]), (((/* implicit */long long int) (-(((/* implicit */int) (short)(-32767 - 1))))))))));
            /* LoopNest 2 */
            for (signed char i_14 = 1; i_14 < 18; i_14 += 3) 
            {
                for (unsigned char i_15 = 1; i_15 < 18; i_15 += 4) 
                {
                    {
                        arr_52 [i_12] [i_14] [i_13 - 2] [i_14] [i_14] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) (unsigned short)65535)))))));
                        var_36 -= min((((/* implicit */int) (unsigned short)5)), ((~(((/* implicit */int) (_Bool)1)))));
                        arr_53 [i_12] [i_14] [i_13] [i_12] &= (!(((/* implicit */_Bool) arr_10 [i_12] [i_12])));
                    }
                } 
            } 
        }
        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1909415321)) ? (((((/* implicit */_Bool) (unsigned short)17)) ? (-2670693496711477325LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65518))))) : (((/* implicit */long long int) min((((/* implicit */int) arr_8 [i_12] [i_12] [i_12] [i_12])), ((~(((/* implicit */int) var_2)))))))));
    }
    var_38 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-87))));
    var_39 = ((/* implicit */long long int) var_13);
    var_40 = ((/* implicit */signed char) var_10);
}
