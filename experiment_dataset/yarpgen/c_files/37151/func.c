/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37151
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) ((long long int) arr_1 [i_0 - 1]));
        arr_3 [i_0] = ((/* implicit */int) arr_0 [i_0 + 1]);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0 + 1])))))));
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0 + 2]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (unsigned short)28520))));
        arr_8 [(_Bool)1] &= ((/* implicit */unsigned char) arr_6 [i_1]);
        var_22 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (unsigned short)25324)) << (((1346140943U) - (1346140940U))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */long long int) (+(0)));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) var_11);
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_2]))) ? (((((/* implicit */_Bool) arr_7 [2ULL] [i_3])) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_6 [i_3])))) : (((/* implicit */int) max(((_Bool)0), (var_15))))))) + ((+(arr_5 [i_2 + 4] [i_3]))))))));
            var_25 = ((/* implicit */signed char) min((max((arr_11 [i_2]), (((/* implicit */unsigned int) arr_6 [i_2 + 2])))), (((/* implicit */unsigned int) arr_10 [i_2]))));
            /* LoopSeq 3 */
            for (int i_4 = 1; i_4 < 19; i_4 += 4) 
            {
                arr_18 [i_2] [i_3] [i_4] = arr_17 [i_2];
                var_26 = ((/* implicit */long long int) min((min((min((0ULL), (((/* implicit */unsigned long long int) arr_13 [i_2] [i_3])))), (((/* implicit */unsigned long long int) arr_11 [i_2 + 2])))), (((/* implicit */unsigned long long int) 844176427))));
                arr_19 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
                var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) min((3979439797598498224LL), (((/* implicit */long long int) -245974464)))))) & (((((/* implicit */_Bool) max((arr_17 [i_2]), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4 + 2] [i_2])) && (((/* implicit */_Bool) 3979439797598498224LL)))))) : (min((var_7), (13ULL)))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_3])))))));
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3]))) | (arr_5 [i_2] [i_2])))))) ? (((int) ((2223726208487333396LL) > (((/* implicit */long long int) 1096183667))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */unsigned long long int) arr_14 [i_2 + 3] [i_2 + 3] [i_5])) : (arr_16 [i_2] [i_3] [i_5])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    arr_26 [i_2] [i_6] = ((unsigned short) (signed char)-115);
                    var_30 = ((/* implicit */int) (~(arr_24 [i_2] [i_5] [i_5] [i_5] [i_2])));
                    var_31 = ((/* implicit */unsigned long long int) arr_9 [i_2]);
                }
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 + 3])) ? (arr_11 [i_2 + 3]) : (arr_11 [i_2 + 4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2 + 4])) || (((/* implicit */_Bool) arr_21 [i_2] [i_2 + 4] [i_7])))))) : (min((((/* implicit */unsigned int) 1096183683)), (var_14)))));
                    arr_29 [i_7] [i_5] [i_3] [i_7] &= arr_25 [i_7] [i_3] [i_5] [i_7] [i_7];
                }
                arr_30 [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_2 + 1] [i_3] [i_5])) ? (((/* implicit */int) arr_28 [i_2] [i_2] [i_3] [i_5] [(unsigned char)7])) : (((/* implicit */int) arr_15 [(_Bool)1] [i_2 + 1] [i_5] [i_5]))))) ? (((306607625838481518LL) >> (((((/* implicit */int) (unsigned short)55663)) - (55652))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_15 [i_2] [i_2 + 2] [i_2] [i_2 + 2]))))));
            }
            for (unsigned char i_8 = 2; i_8 < 19; i_8 += 3) 
            {
                arr_34 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_27 [i_2 + 1] [i_8 + 1] [i_8] [i_3] [i_3]);
                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) arr_32 [(unsigned short)20] [i_3] [i_3] [i_2]))));
                var_34 = ((/* implicit */_Bool) arr_7 [i_2] [i_3]);
            }
            var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3979439797598498221LL))));
        }
        for (int i_9 = 2; i_9 < 21; i_9 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 4; i_10 < 21; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_36 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_45 [i_9] [8LL] [i_9 - 2] [i_10 - 4] [i_11])) ? (((/* implicit */unsigned long long int) arr_45 [i_9] [i_9 - 1] [i_9 + 1] [i_10 - 4] [i_9 - 1])) : (arr_41 [i_9] [i_9 - 1] [i_9 - 1] [i_10 - 1])))));
                            arr_46 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_41 [i_12] [i_11] [i_10 + 1] [15])))) ? (arr_43 [i_2] [i_10 - 2] [i_10] [i_2] [i_10 - 2] [i_10 + 1]) : (((/* implicit */unsigned long long int) (-((-(arr_45 [i_2] [i_9] [i_10] [i_11] [i_12]))))))));
                            arr_47 [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((((((arr_25 [i_2] [13ULL] [(unsigned short)10] [(_Bool)1] [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_12] [(signed char)8] [i_9] [2LL]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_11] [i_12])) || ((_Bool)1)))) : (((/* implicit */int) arr_27 [i_2 - 1] [i_10 + 1] [i_9 - 1] [i_2 - 1] [i_2])))) >> (((((/* implicit */int) (unsigned short)39573)) & (((/* implicit */int) (signed char)30))))));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) arr_7 [i_9] [i_9 - 1]))))));
            var_38 -= ((/* implicit */_Bool) (+(-1712874186)));
        }
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_39 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_2] [i_2] [i_2] [i_2 + 1]))) != (arr_45 [i_2 + 2] [i_2] [i_2 + 4] [i_2 + 2] [i_2 + 1])));
            arr_50 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)25351)) >> (((((/* implicit */int) arr_35 [i_2] [i_13])) - (160)))));
            var_40 -= ((/* implicit */unsigned long long int) (+(((arr_20 [i_13] [i_13] [i_2] [i_2 + 4]) ? (arr_45 [i_13] [i_13] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) arr_48 [i_13]))))));
        }
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_41 = ((/* implicit */unsigned short) ((arr_5 [i_14] [i_14]) == (arr_5 [(_Bool)1] [i_14])));
        var_42 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_16 [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_36 [14])) : (((/* implicit */int) arr_20 [i_14] [i_14] [i_14] [i_14])))) >> (((((/* implicit */int) var_6)) - (48401)))));
        var_43 = ((arr_2 [i_14]) ? (((/* implicit */int) arr_32 [i_14] [i_14] [i_14] [i_14])) : (((((/* implicit */_Bool) 1847292748)) ? (662911684) : (((/* implicit */int) (_Bool)1)))));
    }
    var_44 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) % (min((((/* implicit */int) (unsigned char)59)), ((-(((/* implicit */int) (unsigned char)77))))))));
}
