/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46253
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(max((153719036488832417LL), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))) ? (max((((/* implicit */unsigned long long int) var_8)), (16826723218132375924ULL))) : (min((((1620020855577175691ULL) >> (((3077013927U) - (3077013908U))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16826723218132375924ULL)) && (var_1))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] |= ((/* implicit */_Bool) ((unsigned char) arr_1 [(unsigned char)5] [i_1]));
            arr_5 [i_1] [i_1] [i_0] = ((short) arr_2 [i_0] [i_0] [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (long long int i_3 = 3; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [(short)17] [13LL] [i_0] [11LL] = ((unsigned char) arr_10 [i_3 - 3] [i_1] [i_2] [i_1]);
                        var_15 = ((/* implicit */signed char) ((var_11) << (((((((/* implicit */_Bool) var_13)) ? (1620020855577175712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23))))) - (1620020855577175679ULL)))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */long long int) ((1922425111U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [17U] [i_4])))));
            arr_14 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)34)) ? (-8675230263463005582LL) : (((/* implicit */long long int) 1922425096U)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (var_2)))))));
            arr_15 [i_0] = ((/* implicit */unsigned short) (~(arr_13 [i_0])));
            arr_16 [i_4] [i_0] = ((/* implicit */unsigned char) (-(49152U)));
        }
        arr_17 [i_0] |= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1177655583170934035LL)) ? (arr_0 [i_0]) : (1177655583170934035LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18501))) == (var_13))))) : (((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))))))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 2; i_5 < 16; i_5 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_5] [i_0])) ? (-4461869003691493585LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5 + 1] [i_5] [i_5 + 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0]))) : (var_11)));
            var_18 = ((/* implicit */short) max((((/* implicit */int) max((arr_18 [i_5 - 1]), (((/* implicit */short) var_10))))), ((~(((/* implicit */int) arr_12 [i_0] [i_5 + 1] [i_0]))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            var_19 -= ((/* implicit */unsigned char) ((short) arr_1 [i_6] [i_7]));
            arr_28 [i_6] = ((((/* implicit */long long int) ((unsigned int) (unsigned short)22270))) == (-1177655583170934046LL));
            /* LoopSeq 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_13)))) : (((long long int) (signed char)-1)))))));
                arr_31 [i_6] [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) ((((long long int) var_12)) == (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4094))) * (16826723218132375925ULL))) + (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6))))));
            }
            for (unsigned char i_9 = 2; i_9 < 18; i_9 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    arr_37 [i_10] [i_9 + 1] [(signed char)10] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (1078762802) : (((/* implicit */int) (signed char)-23))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (unsigned short)30338)) : (((/* implicit */int) (unsigned char)15))))) : (arr_10 [i_9 - 1] [i_9 + 1] [(unsigned short)18] [i_9 - 2])));
                    arr_38 [i_6] [i_7] [5LL] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 31)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)151))));
                }
                var_22 = ((/* implicit */int) (-(var_12)));
            }
            for (unsigned char i_11 = 2; i_11 < 18; i_11 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((10U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)31426)))))) * (((/* implicit */int) (_Bool)0))));
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_4))));
            }
            var_25 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)1592))) > (484604398U)));
            var_26 &= ((/* implicit */_Bool) arr_42 [i_6] [i_7] [(short)15] [i_7]);
        }
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            arr_47 [i_12] = ((/* implicit */unsigned int) (signed char)34);
            arr_48 [i_12] = ((/* implicit */signed char) 9007199254740976LL);
            arr_49 [i_6] [i_12] [i_12] = ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) (signed char)0)))));
        }
        arr_50 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-31453)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6])) ? (-4461869003691493596LL) : (var_4)))));
        arr_51 [12] [i_6] = ((/* implicit */_Bool) ((unsigned char) (short)-31162));
        arr_52 [(unsigned short)9] = ((/* implicit */unsigned char) (~(2372542195U)));
    }
    var_27 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)239)) - (235))))));
}
