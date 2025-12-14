/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28937
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) min((4085130861602602884ULL), (13215171627694893951ULL)));
                var_21 = ((/* implicit */signed char) min((max((min((8586994646665552374ULL), (((/* implicit */unsigned long long int) (signed char)-111)))), ((~(13215171627694893951ULL))))), (((/* implicit */unsigned long long int) (+(1699314984))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_0] = (signed char)-74;
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [(signed char)5] [i_0] [i_2] [17] [i_4] = (~((+(13350756598997279132ULL))));
                                arr_15 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4085130861602602884ULL)))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = (~((+(13215171627694893951ULL))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        arr_21 [i_0] [i_2] [i_0] = ((/* implicit */int) (~(13215171627694893951ULL)));
                        var_22 = (signed char)-97;
                        arr_22 [i_0] [i_0] [i_1] [i_0] [15] = ((/* implicit */signed char) 442070022);
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_23 = -2021392766;
                                arr_27 [i_2] [(signed char)3] [4ULL] [(signed char)9] [0ULL] [i_2] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 13215171627694893951ULL)))))));
                                arr_28 [i_0] [i_1] [i_2] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (-(13215171627694893951ULL)));
                                var_24 = (+(((/* implicit */int) (signed char)-29)));
                                var_25 = ((/* implicit */int) (+(14493088115120957349ULL)));
                            }
                        } 
                    } 
                }
                for (signed char i_8 = 2; i_8 < 18; i_8 += 1) 
                {
                    var_26 = max((((/* implicit */unsigned long long int) (+(1496116156)))), ((+(min((14361613212106948731ULL), (3953655958588594267ULL))))));
                    arr_31 [(signed char)3] [i_0] [i_0] [(signed char)4] = (signed char)-109;
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        arr_35 [16ULL] [13] [i_0] [13ULL] [i_1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)43))))));
                        var_27 = (signed char)76;
                        /* LoopSeq 2 */
                        for (signed char i_10 = 3; i_10 < 18; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1615190564))));
                            var_29 = (signed char)118;
                            var_30 = (signed char)-124;
                        }
                        for (int i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            arr_42 [0ULL] [i_1] [i_8 - 2] [i_0] [i_1] = (-(5231572446014657664ULL));
                            arr_43 [i_11] [i_0] [i_8 + 1] [(signed char)0] [(signed char)4] [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)43);
                        }
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
                    {
                        var_31 = 847105735;
                        arr_46 [i_0] [(signed char)12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-55))));
                    }
                    for (signed char i_13 = 0; i_13 < 19; i_13 += 1) /* same iter space */
                    {
                        arr_50 [i_0] [2ULL] [i_13] [i_13] = min((max((min(((signed char)3), ((signed char)-124))), (max(((signed char)123), ((signed char)34))))), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)38))))));
                        arr_51 [13] [7ULL] [i_0] [i_1] [i_0] [(signed char)11] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-53))));
                        /* LoopSeq 2 */
                        for (int i_14 = 3; i_14 < 16; i_14 += 3) 
                        {
                            arr_54 [i_0] [9] [i_8 - 2] [i_13] [3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)123)), ((~(min((((/* implicit */int) (signed char)-118)), (1988699290)))))));
                            arr_55 [i_0] [5ULL] [i_8 + 1] [i_1] [i_0] = ((/* implicit */signed char) max((max((847105735), (1935114837))), ((-(max((2145780359), (-757676800)))))));
                        }
                        for (int i_15 = 0; i_15 < 19; i_15 += 3) 
                        {
                            arr_58 [17] [i_0] [5ULL] [i_8 - 2] [i_15] = ((/* implicit */int) (signed char)43);
                            arr_59 [11ULL] [12ULL] [i_0] [12ULL] [(signed char)7] = ((/* implicit */signed char) -68624274);
                        }
                    }
                }
                /* vectorizable */
                for (int i_16 = 2; i_16 < 15; i_16 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        arr_65 [i_0] [(signed char)14] [5] [(signed char)16] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) -68624248)))))));
                        /* LoopSeq 3 */
                        for (signed char i_18 = 0; i_18 < 19; i_18 += 4) 
                        {
                            arr_68 [i_0] [i_0] [i_16 + 2] [(signed char)16] [i_18] [4ULL] [11] = ((/* implicit */int) (signed char)-104);
                            arr_69 [12] [i_0] [17] [i_0] [i_17] [9ULL] = ((/* implicit */int) (-((-(12626256302152652945ULL)))));
                        }
                        for (signed char i_19 = 0; i_19 < 19; i_19 += 3) /* same iter space */
                        {
                            var_32 = (~(4360923225598216878ULL));
                            var_33 = ((/* implicit */signed char) (+(68624247)));
                        }
                        for (signed char i_20 = 0; i_20 < 19; i_20 += 3) /* same iter space */
                        {
                            arr_74 [11ULL] [i_17] [i_0] [(signed char)8] [i_0] [12] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-118))));
                            var_34 = ((/* implicit */int) (!((!(((/* implicit */_Bool) 12493368137554749436ULL))))));
                        }
                        arr_75 [i_0] = 7121116423764916513ULL;
                    }
                    for (signed char i_21 = 0; i_21 < 19; i_21 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_22 = 0; i_22 < 19; i_22 += 1) 
                        {
                            var_35 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)-39))))));
                            var_36 = ((/* implicit */signed char) (-((-(((/* implicit */int) (signed char)-110))))));
                            arr_82 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-71)))))));
                            arr_83 [(signed char)17] [i_1] [i_21] [16] [i_0] = ((/* implicit */signed char) (-(-1717812425)));
                            var_37 = ((/* implicit */signed char) (+((~(-68624274)))));
                        }
                        arr_84 [11] [8] [(signed char)10] [i_16 - 2] [i_0] = ((/* implicit */unsigned long long int) (signed char)-88);
                        var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-63)))))));
                        arr_85 [i_0] [i_16 - 2] [(signed char)14] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)28)))))));
                        arr_86 [i_0] [i_0] [i_0] [i_1] [(signed char)1] = (signed char)15;
                    }
                    var_39 = ((/* implicit */int) (~(5820487771556898670ULL)));
                    /* LoopSeq 1 */
                    for (signed char i_23 = 2; i_23 < 17; i_23 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (int i_24 = 0; i_24 < 19; i_24 += 1) 
                        {
                            var_40 = ((/* implicit */signed char) 6965090031962604623ULL);
                            var_41 = ((/* implicit */int) (signed char)7);
                            var_42 = ((/* implicit */signed char) (-(931176073)));
                        }
                        for (int i_25 = 0; i_25 < 19; i_25 += 3) /* same iter space */
                        {
                            arr_95 [i_23 + 1] [i_0] [i_0] [18ULL] = ((/* implicit */int) 10041450032538731782ULL);
                            arr_96 [(signed char)12] [i_0] [i_23 - 2] [2ULL] [(signed char)8] [i_0] [17ULL] = 9381421776117377332ULL;
                            var_43 = -711632937;
                            arr_97 [i_0] = 3143841951501665830ULL;
                        }
                        for (int i_26 = 0; i_26 < 19; i_26 += 3) /* same iter space */
                        {
                            arr_100 [i_0] = 68624248;
                            arr_101 [i_0] [i_0] [i_16 + 2] [i_23 + 2] [(signed char)10] = (signed char)-43;
                        }
                        arr_102 [18ULL] [i_0] [i_0] = (signed char)-2;
                    }
                }
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((min(((signed char)12), ((signed char)7))), (min(((signed char)-1), ((signed char)116))))))));
    var_45 = max((((/* implicit */unsigned long long int) -931176077)), (max((min((17421204870002104870ULL), (((/* implicit */unsigned long long int) -1118640248)))), (((/* implicit */unsigned long long int) -68624230)))));
}
