/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37900
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
    var_20 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_3)) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_17))) & (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((int) min(((unsigned short)29026), (((/* implicit */unsigned short) ((1691342695U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)8])))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
                    var_23 ^= var_3;
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            arr_12 [i_0] [(unsigned char)9] = ((/* implicit */unsigned int) min((((signed char) 2162949762U)), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_3] [i_0]))) > (583462343U))))));
            arr_13 [i_0] [6] [i_3] &= ((/* implicit */short) (+(-1622179438)));
            arr_14 [i_0] = ((/* implicit */short) (((((~(((/* implicit */int) ((short) (unsigned short)0))))) + (2147483647))) << (((((/* implicit */int) ((unsigned char) (unsigned char)69))) - (69)))));
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                arr_22 [i_0] [i_0] [i_0] = ((unsigned int) ((1068892961U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_4] [i_4] [i_5])))));
                arr_23 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) (_Bool)0));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_27 [i_0] = ((((/* implicit */_Bool) (signed char)93)) ? (477020586) : (((/* implicit */int) (_Bool)1)));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                    {
                        arr_30 [i_7] [i_0] [i_4] [i_0] [i_0] = (~(((/* implicit */int) var_0)));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)62029)) & (((/* implicit */int) arr_19 [i_0] [i_5] [i_5])))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_0] [i_4] [i_5] [i_6] [i_8] = ((/* implicit */unsigned int) ((_Bool) arr_15 [i_0]));
                        var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)46558)) || (((/* implicit */_Bool) 11U))));
                        var_26 = ((/* implicit */_Bool) (signed char)-23);
                        var_27 = ((/* implicit */_Bool) max((var_27), (((_Bool) ((((/* implicit */unsigned int) -1054492491)) / (2124324980U))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-69))));
                    var_29 = ((/* implicit */unsigned int) ((var_3) != ((-(((/* implicit */int) (unsigned short)11849))))));
                }
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    arr_38 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186))) & (50331648U))) > (((unsigned int) arr_4 [i_0] [i_5]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-13)))))));
                    var_30 = ((/* implicit */int) min((var_30), ((+(((/* implicit */int) (signed char)-59))))));
                }
                for (unsigned char i_11 = 1; i_11 < 8; i_11 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 2; i_12 < 7; i_12 += 4) 
                    {
                        var_31 = ((((/* implicit */int) max((((/* implicit */unsigned short) arr_31 [i_0] [i_11 - 1] [i_11 + 3] [i_0])), ((unsigned short)65530)))) <= (max((((/* implicit */int) (signed char)(-127 - 1))), (var_6))));
                        var_32 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_36 [i_4] [i_5] [i_4] [i_12] [i_5] [i_12 - 1]))))));
                    }
                    for (unsigned short i_13 = 1; i_13 < 10; i_13 += 1) 
                    {
                        arr_46 [i_0] [i_0] [i_5] [i_5] [i_4] = (!(((/* implicit */_Bool) 3226074334U)));
                        arr_47 [i_0] [i_5] [i_4] [i_0] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))));
                        arr_48 [i_0] [i_0] [i_5] [(signed char)8] [i_0] [i_13] = (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)37)) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46))) > (0U))))))));
                        arr_49 [i_0] [0] [i_11] [i_13] = (+(((((/* implicit */_Bool) 2890867503U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1)))));
                    }
                    arr_50 [i_0] [i_4] [i_4] [(unsigned short)0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_10)))))))));
                }
            }
            arr_51 [i_0] [i_0] [i_0] = min(((((~(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (short)-10246)))), (((((_Bool) (short)21972)) ? (((((/* implicit */int) (unsigned char)247)) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_17)), ((unsigned char)255)))))));
            var_33 -= (+(((/* implicit */int) max((arr_35 [i_0] [i_0] [(signed char)6] [i_0] [(_Bool)1] [i_0]), (arr_35 [(_Bool)1] [(signed char)2] [(signed char)0] [i_4] [(signed char)2] [i_0])))));
        }
        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
        {
            arr_54 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_5))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)175)) & (2045416166))))));
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
            {
                for (unsigned char i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((short) var_7)))));
                        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) max((arr_31 [i_16] [i_15] [i_14] [i_16]), (arr_31 [i_14] [i_14] [2] [i_14])))) : (((/* implicit */int) ((max((14U), (((/* implicit */unsigned int) (_Bool)0)))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [8U] [i_0] [i_0])))))))))));
                        arr_62 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_53 [i_16] [i_0] [i_14])) >> (((/* implicit */int) arr_53 [i_0] [i_0] [i_0]))))));
                        var_36 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((arr_18 [i_0] [i_14] [i_14]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_14] [i_0]))))))));
                    }
                } 
            } 
            var_37 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-24585)) + (2147483647))) << (((arr_4 [i_14] [i_0]) - (264031258U)))))) ? ((+(((/* implicit */int) (unsigned char)203)))) : (((/* implicit */int) (signed char)108))));
            arr_63 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((1807184384U) <= (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_52 [i_0])) : (((/* implicit */int) (unsigned char)0)))))));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_66 [i_0] [i_0] [i_17] = (-((-(((/* implicit */int) (unsigned char)175)))));
            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((((/* implicit */int) (unsigned short)18217)) <= (((/* implicit */int) ((((/* implicit */int) arr_41 [i_0] [i_17] [i_17] [(unsigned char)4] [i_17])) != (((/* implicit */int) var_2))))))))));
        }
        arr_67 [i_0] = ((/* implicit */unsigned short) (!((_Bool)1)));
    }
}
