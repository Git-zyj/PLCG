/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233657
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_16))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 = (~((-((-(1695184446))))));
                    arr_9 [i_0] = ((/* implicit */_Bool) (~((+((+(arr_5 [i_2])))))));
                    var_20 = ((/* implicit */signed char) (-((~((~(3840328989U)))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) (+((~((+(3840328987U)))))));
                            var_21 ^= ((/* implicit */signed char) (~((-((~(3840328989U)))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(3ULL)));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) 0ULL))))))))))));
                        }
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_23 ^= (+((-(2113929216))));
                            var_24 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 454638306U))))))))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-((+((-(-460989589817508576LL))))))))));
                        }
                        var_26 ^= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(-460989589817508578LL)))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(14892891444514410135ULL))))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(3840328989U)))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) 348073731056285688ULL)))))))));
                            var_28 = ((/* implicit */_Bool) (+((~((+(((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                        }
                        var_29 = ((/* implicit */int) max((var_29), ((-((-((-(arr_6 [i_2])))))))));
                    }
                }
            } 
        } 
        arr_26 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [i_0] [i_0])))))))));
        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((-(4323415444146579543ULL))))))));
    }
    for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        var_31 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((~(16382))))))));
        arr_29 [i_8] = ((/* implicit */signed char) (+((+((~(var_3)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                var_32 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_8] [i_9] [i_10] [i_10])))))));
                arr_36 [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_35 [i_8] [i_9]))))));
                var_33 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)32))))));
                var_34 = (~((-(-460989589817508576LL))));
            }
            for (int i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                var_35 = ((/* implicit */signed char) (-((+(arr_31 [i_8] [i_8])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 2) 
                {
                    arr_41 [i_12] [i_8] [i_9] [i_11] [i_12 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_16)))))));
                    arr_42 [i_9] [i_12] = (+((+(((/* implicit */int) var_4)))));
                    arr_43 [i_8] [i_9] [i_11] [i_12] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_9] [i_12 - 1])))))));
                    arr_44 [i_8] [i_9] [i_11] [i_12] = ((/* implicit */short) (~((-(4611615649683210240ULL)))));
                }
            }
            for (short i_13 = 0; i_13 < 16; i_13 += 2) 
            {
                var_36 = ((/* implicit */int) (~(460989589817508569LL)));
                /* LoopSeq 3 */
                for (unsigned short i_14 = 3; i_14 < 13; i_14 += 2) 
                {
                    var_37 = ((/* implicit */int) (+((~(arr_48 [i_8] [i_9] [i_14 + 3])))));
                    var_38 = ((/* implicit */int) (~((~(-460989589817508569LL)))));
                    var_39 ^= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_50 [i_8] [i_9] [i_13] [i_13] [i_14 - 3]))))));
                }
                for (signed char i_15 = 0; i_15 < 16; i_15 += 2) /* same iter space */
                {
                    arr_54 [i_8] [i_9] [i_9] [i_13] [i_15] [i_15] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    var_40 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_34 [i_8] [i_9] [i_13] [i_15]))))));
                }
                for (signed char i_16 = 0; i_16 < 16; i_16 += 2) /* same iter space */
                {
                    arr_59 [i_8] [i_8] [i_9] [i_13] [i_16] = ((/* implicit */signed char) (~((-(-460989589817508569LL)))));
                    arr_60 [i_8] [i_9] [i_13] [i_16] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                }
                var_41 = ((/* implicit */signed char) (+((~(((/* implicit */int) (signed char)53))))));
                var_42 = ((/* implicit */long long int) (~(((/* implicit */int) (!(var_2))))));
            }
            var_43 = ((/* implicit */_Bool) (+((+(-460989589817508569LL)))));
            var_44 ^= ((/* implicit */signed char) (+((-(((/* implicit */int) var_4))))));
        }
        arr_61 [i_8] [i_8] = ((/* implicit */signed char) (-((+((+(arr_47 [i_8] [i_8])))))));
    }
    for (signed char i_17 = 0; i_17 < 15; i_17 += 3) 
    {
        arr_64 [i_17] = ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(-618146616))))))));
        var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((+(arr_48 [i_17] [i_17] [i_17]))))))));
        var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) (~((~((~(((/* implicit */int) arr_8 [i_17] [i_17])))))))))));
    }
    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 3) 
        {
            var_47 ^= ((/* implicit */_Bool) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
            var_48 ^= ((/* implicit */long long int) (-((+((-(arr_12 [i_18] [i_18] [i_18] [i_18] [i_18])))))));
        }
        arr_69 [i_18] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))))));
        /* LoopSeq 4 */
        for (int i_20 = 0; i_20 < 21; i_20 += 2) 
        {
            var_49 ^= ((/* implicit */_Bool) (-((~((+(var_5)))))));
            var_50 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) var_9)))))))));
        }
        /* vectorizable */
        for (unsigned char i_21 = 0; i_21 < 21; i_21 += 1) 
        {
            var_51 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_16))))));
            arr_75 [i_18] = ((/* implicit */_Bool) (~((+(348073731056285681ULL)))));
        }
        for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_23 = 0; i_23 < 21; i_23 += 1) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 21; i_24 += 2) 
                {
                    for (unsigned int i_25 = 0; i_25 < 21; i_25 += 3) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_22])))))))));
                            var_53 = ((/* implicit */int) (~((~((+(arr_68 [i_18] [i_22] [i_23])))))));
                        }
                    } 
                } 
            } 
            arr_84 [i_18] [i_22] = ((/* implicit */long long int) (-(((/* implicit */int) (short)20971))));
            var_54 = ((/* implicit */unsigned char) (~((~((+(((/* implicit */int) var_9))))))));
            arr_85 [i_18] [i_22] = ((/* implicit */unsigned short) (-((~(460989589817508569LL)))));
        }
        for (long long int i_26 = 0; i_26 < 21; i_26 += 2) 
        {
            /* LoopSeq 4 */
            for (short i_27 = 0; i_27 < 21; i_27 += 2) 
            {
                var_55 = ((/* implicit */unsigned int) min((var_55), (((/* implicit */unsigned int) (-((~((~(766579386))))))))));
                var_56 = ((/* implicit */_Bool) (-((-((+(((/* implicit */int) var_15))))))));
                var_57 = ((/* implicit */unsigned long long int) min((var_57), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))))));
            }
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                var_58 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)-20)))))))));
                /* LoopNest 2 */
                for (int i_29 = 1; i_29 < 17; i_29 += 2) 
                {
                    for (unsigned long long int i_30 = 0; i_30 < 21; i_30 += 3) 
                    {
                        {
                            var_59 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_3)))))))));
                            var_60 ^= ((/* implicit */_Bool) (-((+((-(var_0)))))));
                        }
                    } 
                } 
                var_61 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40658)))))))));
            }
            for (signed char i_31 = 0; i_31 < 21; i_31 += 4) 
            {
                var_62 = ((/* implicit */_Bool) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_8 [i_31] [i_18])))))))));
                arr_103 [i_18] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 460989589817508566LL)))))));
                var_63 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (!(var_10))))))));
            }
            for (unsigned char i_32 = 0; i_32 < 21; i_32 += 1) 
            {
                var_64 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((+(var_11))))))));
                arr_108 [i_32] [i_26] [i_18] [i_32] = ((/* implicit */signed char) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                var_65 = ((/* implicit */long long int) max((var_65), (((/* implicit */long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_26]))))))))))));
                var_66 = ((/* implicit */int) min((var_66), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 18098670342653265925ULL)))))))))))));
            }
            var_67 ^= (~((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [i_18] [i_26] [i_26]))))))));
        }
    }
    var_68 = ((/* implicit */_Bool) (-((~((~(542718648688235901ULL)))))));
}
