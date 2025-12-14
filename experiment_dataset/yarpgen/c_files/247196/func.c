/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247196
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
    var_11 = ((max((((((/* implicit */long long int) ((/* implicit */int) var_2))) % (66571993088LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -3464371456501416851LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8)))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)22214)), (var_10)))) ? (((16777200) + (((/* implicit */int) (signed char)19)))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-14557))))))));
    var_12 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_13 += ((/* implicit */long long int) (~(((unsigned long long int) var_10))));
        var_14 = ((/* implicit */unsigned char) var_1);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */signed char) var_3);
            var_15 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) min((var_0), (((/* implicit */short) var_9))))), (arr_5 [i_1] [(_Bool)1] [i_0 + 1]))) == (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & ((((_Bool)1) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) var_0)))))))));
            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_0 + 1])))))));
        }
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) arr_7 [15] [(_Bool)1]);
            var_18 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 4294967295U)) ? (arr_7 [i_2 + 1] [i_0 + 1]) : (arr_7 [i_2 + 1] [i_0 + 1]))));
        }
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) /* same iter space */
        {
            var_19 |= var_7;
            arr_13 [i_0] = (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_7)))) ? (arr_5 [i_0 - 1] [i_3 - 1] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)23086))))));
        }
        arr_14 [14U] = ((/* implicit */unsigned long long int) var_5);
        /* LoopSeq 3 */
        for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
        {
            var_20 = ((/* implicit */short) (+(((arr_5 [i_4] [i_4] [i_4 + 2]) - (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_4])))))));
            var_21 = ((/* implicit */unsigned char) var_1);
            var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_1))))))));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */int) ((short) var_7))), (((((/* implicit */int) arr_19 [i_0] [i_4] [i_7])) >> (((3577464415802254982LL) - (3577464415802254957LL))))))) : ((-(((/* implicit */int) arr_11 [i_6] [i_7 + 1]))))));
                            arr_27 [i_4] [i_4] [i_5] [i_5] [6U] [i_6] [i_7] = ((2550549898583105609LL) % (((/* implicit */long long int) ((((_Bool) -847502515)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30)))))));
                            arr_28 [13ULL] [i_4] [i_4] [i_6] [i_7] = arr_9 [15U];
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (signed char)35)) & (((/* implicit */int) (unsigned char)130)))));
            }
        }
        for (unsigned short i_8 = 2; i_8 < 15; i_8 += 2) 
        {
            var_25 = ((/* implicit */_Bool) ((short) var_5));
            arr_31 [i_0 - 1] [i_8] [(unsigned short)14] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-8231)) + (-1141177237))))));
            var_26 = ((/* implicit */signed char) (unsigned char)185);
        }
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            var_27 = ((/* implicit */signed char) var_10);
            var_28 = max((((/* implicit */unsigned int) -847502506)), (240U));
        }
    }
    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_0))))) + (var_7)));
            /* LoopSeq 4 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_30 = ((/* implicit */short) var_4);
                /* LoopNest 2 */
                for (signed char i_13 = 3; i_13 < 20; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */short) (signed char)(-127 - 1))), ((short)32767)))), (arr_43 [(unsigned char)1] [i_13 - 3] [i_14] [i_13 - 3] [i_13] [i_13])))) ? (((/* implicit */int) ((arr_43 [i_13 - 2] [i_13 - 1] [i_13 - 3] [i_13 - 3] [i_13 - 1] [i_13 - 1]) > (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)(-127 - 1)))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)22214))) == (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))) ^ (5236584004303309912LL))))))));
                            var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                            arr_48 [i_10] [i_10] [i_11] [(signed char)15] [i_13 - 1] [i_14] = ((/* implicit */int) arr_44 [i_10] [6] [i_10]);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 4) 
            {
                arr_51 [i_10] [i_10] [i_15] = ((/* implicit */unsigned long long int) var_0);
                var_33 = ((/* implicit */short) ((_Bool) 18446744073709551615ULL));
            }
            /* vectorizable */
            for (long long int i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                var_34 = ((/* implicit */long long int) ((arr_46 [i_10] [i_11] [i_16] [i_10] [i_11]) ? (((/* implicit */int) arr_44 [i_10] [i_11] [4ULL])) : (arr_36 [i_10])));
                var_35 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)252)) << (((arr_36 [(unsigned short)19]) + (659361824)))));
            }
            for (unsigned char i_17 = 0; i_17 < 21; i_17 += 3) 
            {
                var_36 |= ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_55 [i_17] [i_17] [i_17] [i_11])), (max((((/* implicit */unsigned int) var_5)), (258U))))) & (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_46 [i_10] [(short)10] [i_17] [i_10] [i_10])))))));
                var_37 = ((/* implicit */signed char) min((arr_45 [i_10] [i_10] [9ULL] [i_10]), (-2248382326687031468LL)));
                arr_58 [i_10] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)35)) < (-279210688)));
                var_38 = ((/* implicit */int) (+((~(((long long int) arr_41 [i_10] [0] [i_17]))))));
            }
            var_39 = ((/* implicit */unsigned char) -8483324322923163650LL);
        }
        for (short i_18 = 1; i_18 < 18; i_18 += 4) 
        {
            var_40 = ((/* implicit */long long int) ((unsigned short) 1701485119U));
            arr_63 [i_10] [i_10] [i_18] = ((/* implicit */_Bool) arr_60 [i_18] [i_10] [i_10]);
        }
        arr_64 [i_10] [i_10] = ((/* implicit */unsigned short) var_1);
    }
    for (int i_19 = 0; i_19 < 25; i_19 += 4) 
    {
        var_41 = ((/* implicit */_Bool) ((int) (+(((/* implicit */int) (unsigned char)150)))));
        var_42 += ((/* implicit */unsigned char) arr_67 [i_19]);
    }
}
