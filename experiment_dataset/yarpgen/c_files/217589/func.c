/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217589
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_8 [i_2] [2] [2] [0U] &= (-(((/* implicit */int) ((((((/* implicit */int) (unsigned char)89)) * (((/* implicit */int) var_2)))) == (((/* implicit */int) arr_2 [6ULL]))))));
                    var_20 = max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_3 [i_0]))), (((/* implicit */unsigned int) arr_2 [i_0]))))), (((((/* implicit */_Bool) min((arr_5 [i_2] [i_1 - 1] [(unsigned char)7] [i_0]), (((/* implicit */unsigned int) var_19))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) ^ (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1])))))))));
                    var_21 = ((/* implicit */int) (~(max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58996)))))))));
                }
                for (unsigned short i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    var_22 ^= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)0))));
                    var_23 = ((/* implicit */int) var_15);
                    arr_11 [i_0] = ((/* implicit */unsigned char) min((max(((+(var_1))), (((/* implicit */long long int) ((arr_1 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_3 [i_0])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3242114516U)) ? (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) var_2)))) : (((/* implicit */int) (_Bool)1)))))));
                }
                arr_12 [i_0] = ((/* implicit */unsigned char) min((var_1), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0]))))))))));
                /* LoopSeq 2 */
                for (signed char i_4 = 2; i_4 < 8; i_4 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) 1518029134);
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) -595805912)))))))))));
                    var_26 = ((/* implicit */unsigned int) arr_6 [i_0] [11]);
                }
                for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
                {
                    var_27 = ((/* implicit */long long int) (+((~(10065733248644179348ULL)))));
                    var_28 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_16 [i_5] [i_1] [7] [i_0]) : (-97971843))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_19 [i_0] [i_1] [i_0])))) / ((-(var_12)))))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (unsigned int i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                for (long long int i_9 = 1; i_9 < 10; i_9 += 3) 
                {
                    {
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) -1518029134))));
                        var_30 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_0))))))), (min((14ULL), (((/* implicit */unsigned long long int) -57388183))))));
                        var_31 = ((/* implicit */signed char) (+(max(((+(arr_0 [i_6] [i_6]))), (((/* implicit */unsigned long long int) 2505138503225519499LL))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_10 = 2; i_10 < 10; i_10 += 1) 
                        {
                            var_32 = (~(((/* implicit */int) (_Bool)0)));
                            arr_34 [i_7] [i_6] [i_7] [i_9] = (+(((((/* implicit */_Bool) arr_7 [i_6])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_16))))));
                            arr_35 [i_6] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_17)))) ? (((((/* implicit */_Bool) arr_10 [i_6])) ? (1518029120) : (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_24 [i_6] [i_6] [i_6]))));
                        }
                        for (signed char i_11 = 3; i_11 < 9; i_11 += 2) 
                        {
                            var_33 = (i_6 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_16)))), ((+(-97971858)))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_6] [i_7] [i_6 + 1] [i_11])) >> (((((((/* implicit */_Bool) -7119813361874104224LL)) ? (((/* implicit */int) arr_25 [i_6])) : (var_0))) - (62157))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_16)))), ((+(-97971858)))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_6] [i_7] [i_6 + 1] [i_11])) >> (((((((((/* implicit */_Bool) -7119813361874104224LL)) ? (((/* implicit */int) arr_25 [i_6])) : (var_0))) - (62157))) + (26465)))))))));
                            arr_38 [i_6] [i_7] [i_6] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) (((+(var_5))) % (((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_6])) * (((/* implicit */int) (unsigned char)252)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((var_19) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_14 [i_6] [i_7] [i_6] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_7] [i_9] [i_9]))) : (1889702040631437528LL))))));
                            var_34 = min((((((/* implicit */_Bool) arr_21 [i_6])) ? (((((/* implicit */_Bool) arr_4 [2LL] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_6] [i_6])) ? (arr_10 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20765)))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)79)), ((unsigned char)4))))))));
                            var_35 = ((/* implicit */_Bool) arr_23 [i_6]);
                        }
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) arr_25 [i_6]))))) ? (max((arr_0 [i_6] [i_6]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_16)), (arr_18 [i_6] [i_6 - 1] [i_6])))))))) ? (max((max((arr_16 [i_6] [i_6] [6] [i_6 + 1]), (((/* implicit */int) arr_20 [i_6] [i_6])))), (((/* implicit */int) (unsigned short)0)))) : (-1518029126)));
        var_37 = (~(((((/* implicit */_Bool) 2760144522638301423LL)) ? (((/* implicit */int) arr_4 [i_6] [i_6 - 1])) : (arr_32 [i_6] [i_6] [10U] [i_6] [i_6] [i_6] [i_6]))));
        var_38 *= ((/* implicit */unsigned long long int) arr_19 [(short)0] [i_6 - 1] [(short)0]);
    }
    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            arr_44 [i_13] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (2195136553U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119)))))) ? (((((/* implicit */_Bool) -137274408)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_43 [i_13] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_39 [i_12]))))));
            var_39 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_19))));
        }
        arr_45 [5] &= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (+(var_12)))) ? (arr_40 [i_12] [i_12]) : (((((/* implicit */_Bool) arr_41 [i_12])) ? (arr_40 [i_12] [(short)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
        arr_46 [i_12] = ((/* implicit */int) arr_40 [i_12] [i_12]);
        var_40 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max(((unsigned char)222), (((/* implicit */unsigned char) (_Bool)1))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-72))))) ? (1889702040631437520LL) : (min((16128LL), (((/* implicit */long long int) 545968949U)))))) : (((/* implicit */long long int) 97971834))));
    }
    for (int i_14 = 2; i_14 < 9; i_14 += 3) 
    {
        var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_10 [(signed char)6])) ? (((/* implicit */int) arr_20 [(_Bool)1] [6LL])) : (((/* implicit */int) arr_27 [i_14])))), (arr_31 [i_14 - 2] [i_14] [(unsigned short)10] [i_14 - 2] [i_14 - 2]))))));
        /* LoopNest 3 */
        for (unsigned short i_15 = 1; i_15 < 8; i_15 += 2) 
        {
            for (long long int i_16 = 1; i_16 < 9; i_16 += 3) 
            {
                for (unsigned char i_17 = 3; i_17 < 8; i_17 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_18 = 0; i_18 < 10; i_18 += 4) 
                        {
                            arr_63 [i_15] [3ULL] [(signed char)3] = ((/* implicit */unsigned char) ((unsigned int) arr_29 [i_14] [i_14] [(signed char)7] [i_15]));
                            arr_64 [i_14 - 2] [i_15] [5ULL] [0ULL] [i_18] = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-1))))), (((((((/* implicit */_Bool) 93101077U)) ? (arr_40 [10ULL] [10ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))))) * (((/* implicit */unsigned long long int) arr_3 [i_15])))));
                        }
                        for (int i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            arr_68 [i_15] [6ULL] [i_15] = ((/* implicit */_Bool) arr_17 [i_15]);
                            arr_69 [i_15] [i_17] [i_15] [i_15] [i_15] [i_14] = arr_30 [i_14];
                        }
                        var_42 = ((/* implicit */long long int) (((~(max((((/* implicit */unsigned int) 866972470)), (arr_26 [i_17] [i_16] [i_14]))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [(_Bool)1])) ? (2147483647LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (arr_19 [i_14] [(signed char)8] [i_15]) : (((((/* implicit */_Bool) arr_16 [i_15 - 1] [(_Bool)1] [i_16] [i_17])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_14] [3U])))))))));
                    }
                } 
            } 
        } 
        var_43 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) ((arr_57 [i_14] [i_14] [i_14 - 1] [i_14]) + (((/* implicit */long long int) arr_53 [i_14] [(_Bool)1]))))))));
    }
    var_44 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((var_17) & (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -97971845)) ? (-1889702040631437554LL) : (((/* implicit */long long int) -330173260))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) 3U)))) : (((((/* implicit */_Bool) var_5)) ? ((~(var_12))) : (((((/* implicit */_Bool) (signed char)29)) ? (var_17) : (((/* implicit */long long int) var_0))))))));
}
