/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209017
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) min((var_3), (((/* implicit */long long int) var_9)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2]))))) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2])) : (((arr_0 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_0), (arr_1 [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_12 -= (~(((((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1])) << ((((+(arr_3 [i_0] [i_0]))) + (8406706466411752511LL))))));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                var_13 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (signed char)85)))), (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_0 - 1] [i_0])) ? (arr_6 [i_0 + 2] [i_0 + 2]) : (((/* implicit */int) arr_5 [14U] [i_0 + 2] [i_0]))))));
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-74)) != (arr_6 [i_1] [i_1]))))))) ? (arr_4 [i_0 + 1] [i_0] [i_0]) : ((-(arr_4 [i_0] [i_0] [i_0]))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 4) 
                {
                    var_15 += ((/* implicit */long long int) min((211834496U), (((/* implicit */unsigned int) arr_6 [i_2] [i_2]))));
                    var_16 = arr_3 [i_0] [i_0];
                    var_17 = ((/* implicit */unsigned char) ((signed char) (signed char)68));
                    var_18 &= ((/* implicit */unsigned int) ((unsigned short) max((-6220551307136953734LL), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0 + 1])))));
                }
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 24; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        {
                            arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                            var_19 -= ((/* implicit */long long int) max((((((((/* implicit */long long int) arr_4 [i_1] [3LL] [i_5])) >= (arr_8 [i_2] [i_2] [i_2]))) ? ((+(((/* implicit */int) arr_1 [i_5])))) : (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1] [i_5]))))), ((+(arr_15 [i_0 + 2])))));
                            var_20 = ((/* implicit */long long int) arr_10 [i_1] [i_4]);
                            arr_17 [i_0] [i_4 - 1] [i_4 - 1] = max((max((arr_8 [i_0] [i_1] [i_4]), (((arr_13 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1] [i_0 + 1]))))))), (max((((/* implicit */long long int) ((unsigned int) arr_4 [i_1] [i_2] [i_5]))), (max((((/* implicit */long long int) var_9)), (arr_8 [i_0] [i_1] [i_4 - 1]))))));
                            arr_18 [i_0] [i_1] [9U] [i_0] [10LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (short)-32081))))) ? (((/* implicit */unsigned long long int) max((arr_8 [i_0] [i_0 - 1] [i_0]), (arr_8 [i_0] [i_0 - 1] [i_0])))) : (max((arr_9 [i_0] [i_5] [i_4]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [8U]))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                arr_22 [i_0] [(signed char)22] = ((/* implicit */int) var_9);
                var_21 = ((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_6] [i_6] [i_6]);
                arr_23 [18U] [i_1] [i_1] &= ((/* implicit */_Bool) ((unsigned int) arr_14 [i_0] [i_0] [i_1] [i_1]));
            }
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                var_22 *= arr_10 [i_0 + 2] [i_7];
                /* LoopSeq 1 */
                for (signed char i_8 = 1; i_8 < 24; i_8 += 1) 
                {
                    arr_29 [i_0] = ((/* implicit */unsigned short) (-(arr_9 [i_0] [i_1] [i_1])));
                    var_23 = ((((/* implicit */_Bool) arr_10 [i_7] [i_8 - 1])) ? (((/* implicit */unsigned long long int) arr_8 [(_Bool)1] [(_Bool)1] [i_0 + 1])) : (arr_28 [i_8 + 1]));
                    arr_30 [i_0] = ((/* implicit */signed char) arr_26 [i_0 + 1] [i_1] [i_7] [i_8 - 1]);
                    var_24 &= ((/* implicit */_Bool) (-(arr_24 [(signed char)0] [i_0 - 1] [i_8 - 1])));
                    arr_31 [14U] [i_1] [i_7] [i_8] &= ((/* implicit */long long int) arr_5 [i_0 + 1] [i_0] [i_0]);
                }
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2])) ? (arr_3 [i_0] [i_0 - 1]) : (arr_3 [i_0] [i_0 + 1]))))));
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((signed char) ((unsigned int) arr_15 [i_7]))))));
            }
            var_27 *= ((/* implicit */unsigned char) arr_12 [(signed char)8] [i_0 - 1] [i_0 + 2] [i_0 + 1]);
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            var_28 = ((/* implicit */short) (!(arr_5 [i_0 + 2] [i_0 - 1] [i_0 - 1])));
            arr_36 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)30)) ? (arr_11 [i_9] [i_9] [i_9] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [11LL])))));
        }
        arr_37 [14U] &= ((/* implicit */signed char) arr_24 [(_Bool)1] [i_0] [i_0 + 2]);
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [(unsigned char)9] [i_0] [i_0] [i_0])) ? ((-(((/* implicit */int) arr_32 [i_0 + 1])))) : (((/* implicit */int) ((unsigned short) min((arr_34 [i_0] [i_0 - 1] [i_0 - 1]), (((/* implicit */signed char) arr_20 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
    {
        var_30 -= ((/* implicit */unsigned int) arr_3 [i_10] [i_10]);
        /* LoopSeq 3 */
        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            arr_44 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) 1046528U);
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) arr_3 [i_10] [i_10]))));
            var_32 = ((/* implicit */short) arr_8 [i_10] [i_10] [i_11]);
            var_33 = ((/* implicit */unsigned short) arr_26 [i_11] [i_11] [i_11] [i_11]);
        }
        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
        {
            var_34 = ((/* implicit */signed char) var_1);
            var_35 = ((/* implicit */unsigned short) (+(arr_39 [i_10])));
            arr_47 [17U] [i_10] = arr_12 [i_10] [i_12] [5LL] [i_12];
        }
        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
        {
            var_36 -= ((/* implicit */short) arr_1 [i_13]);
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_10] [i_10] [i_10])) ? (211834517U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1984)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 1; i_14 < 15; i_14 += 4) 
            {
                arr_53 [i_10] [i_10] [i_14] = ((/* implicit */unsigned short) ((signed char) arr_14 [i_14 + 2] [i_14 + 1] [i_14 + 1] [i_14 - 1]));
                var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) (+(arr_39 [i_10]))))));
            }
        }
        var_39 = ((/* implicit */signed char) arr_8 [i_10] [i_10] [i_10]);
    }
    /* vectorizable */
    for (unsigned char i_15 = 2; i_15 < 22; i_15 += 2) 
    {
        var_40 = ((/* implicit */_Bool) ((long long int) (signed char)-86));
        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_15] [i_15 + 2] [i_15 - 2] [i_15 + 2])) ? (((long long int) arr_54 [i_15 + 2])) : (arr_13 [i_15] [i_15 + 2] [i_15] [i_15 - 2] [i_15] [i_15 - 2])));
        arr_57 [i_15] = ((/* implicit */unsigned long long int) arr_35 [i_15] [i_15] [i_15]);
    }
    for (long long int i_16 = 0; i_16 < 23; i_16 += 3) 
    {
        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + (max((arr_13 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]), (((/* implicit */long long int) ((_Bool) (signed char)-107)))))));
        var_43 -= ((/* implicit */long long int) ((min((arr_25 [i_16]), (arr_25 [i_16]))) & (min((arr_25 [i_16]), (arr_25 [i_16])))));
        /* LoopSeq 2 */
        for (unsigned short i_17 = 0; i_17 < 23; i_17 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_18 = 0; i_18 < 23; i_18 += 4) 
            {
                var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) min(((signed char)-86), ((signed char)101))))));
                var_45 *= ((/* implicit */long long int) min((min((arr_24 [i_17] [i_17] [i_18]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_16] [i_16])) ? (arr_6 [i_16] [i_16]) : (((/* implicit */int) (signed char)-86))))))), (((/* implicit */unsigned int) arr_58 [i_18]))));
                var_46 = ((/* implicit */signed char) arr_33 [i_18]);
            }
            arr_65 [i_16] = ((/* implicit */short) max((((/* implicit */unsigned int) min((max((((/* implicit */signed char) arr_32 [i_17])), (arr_10 [(unsigned short)13] [8]))), (((/* implicit */signed char) arr_20 [i_16] [i_16] [i_17] [i_17]))))), (max((211834523U), (((/* implicit */unsigned int) arr_32 [i_16]))))));
            /* LoopSeq 1 */
            for (int i_19 = 0; i_19 < 23; i_19 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_20 = 0; i_20 < 23; i_20 += 4) 
                {
                    var_47 &= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (arr_13 [i_16] [i_17] [i_17] [i_19] [i_19] [i_17])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_17] [i_17] [i_19] [i_20]))) : (arr_28 [(_Bool)1]))));
                    arr_71 [i_16] [i_17] [i_17] [i_20] = ((/* implicit */_Bool) (unsigned short)24505);
                }
                for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                {
                    var_48 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) 3895951609244073010LL)) : (arr_72 [i_16] [i_17] [i_19] [i_21])));
                    var_49 = ((/* implicit */unsigned char) max(((+(min((arr_64 [i_16]), (((/* implicit */long long int) (unsigned short)24505)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)5)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_22 = 1; i_22 < 19; i_22 += 2) 
                    {
                        var_50 = ((/* implicit */unsigned short) max((-314991304), (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_22 + 2] [i_22 + 2] [i_21 - 1] [i_17])))))));
                        var_51 = ((/* implicit */long long int) ((unsigned int) min((arr_55 [i_16]), (((/* implicit */unsigned short) max((((/* implicit */signed char) arr_0 [i_16] [i_22])), ((signed char)-109)))))));
                        var_52 = ((/* implicit */long long int) var_8);
                        var_53 = ((/* implicit */unsigned short) 9223372036854775784LL);
                    }
                    arr_76 [5LL] [i_16] [i_17] [i_16] = max(((~(((/* implicit */int) arr_75 [i_21 - 1] [i_16] [i_17] [i_17])))), (((/* implicit */int) arr_75 [i_21 - 1] [i_19] [i_21 - 1] [i_21])));
                }
                var_54 = ((/* implicit */int) min((arr_19 [i_16] [i_19] [i_19] [i_17]), (((unsigned char) -439281878))));
                arr_77 [i_16] [i_16] [i_16] [i_16] = max((arr_6 [i_16] [i_19]), (min((arr_6 [i_17] [i_19]), (arr_6 [i_16] [i_16]))));
            }
        }
        /* vectorizable */
        for (signed char i_23 = 0; i_23 < 23; i_23 += 2) 
        {
            var_55 = ((/* implicit */unsigned short) arr_25 [i_16]);
            var_56 = arr_14 [4] [i_16] [i_23] [i_23];
        }
        var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (3895951609244073010LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (7799082447195120848LL)));
    }
}
