/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202213
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((long long int) 4176392974933367366LL));
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 22; i_1 += 3) /* same iter space */
        {
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                var_16 = ((/* implicit */int) ((unsigned long long int) ((long long int) (unsigned char)5)));
                var_17 = ((448014048528070779LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))));
                var_18 = ((/* implicit */short) ((_Bool) ((unsigned int) 299981139838296059LL)));
                var_19 = ((/* implicit */unsigned int) arr_0 [18LL] [i_1]);
            }
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 2] [i_1 - 2] [i_1 + 1]))) : (524287U)));
            arr_11 [i_0 - 1] [i_1] [i_0] = ((/* implicit */int) ((long long int) (((_Bool)0) ? (((/* implicit */unsigned long long int) -509110339671311737LL)) : (8192469512496310173ULL))));
            var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)9827)) ? (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0] [i_1 - 2]) : (527765581332480LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 2])))));
        }
        for (short i_3 = 2; i_3 < 22; i_3 += 3) /* same iter space */
        {
            var_22 ^= (-(-5231196006893135492LL));
            var_23 *= ((/* implicit */_Bool) (-(((/* implicit */int) (short)-5235))));
            var_24 = ((/* implicit */unsigned short) min((var_24), (((unsigned short) -16LL))));
            var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_3 + 1] [i_3])) ? (3493332997537732983LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124)))));
            var_26 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)116)) > (((/* implicit */int) arr_12 [i_3 + 1]))));
        }
        for (short i_4 = 2; i_4 < 22; i_4 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 536869888U)) ? (245769686) : (((/* implicit */int) (short)16384))));
            arr_16 [i_0] = ((/* implicit */unsigned int) ((int) (_Bool)1));
            var_28 = (~(arr_9 [i_4 - 1] [i_4] [i_4 - 2]));
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (+(1924596920))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_30 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_5])) >> (((((/* implicit */int) arr_5 [i_0 - 1])) - (18981)))));
            arr_19 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((2002924595035931164ULL) < (((/* implicit */unsigned long long int) var_3))));
            arr_20 [3U] [i_5] = ((/* implicit */short) ((long long int) (_Bool)1));
        }
        var_31 = ((/* implicit */short) (+(3493332997537732983LL)));
    }
    for (unsigned short i_6 = 2; i_6 < 9; i_6 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            var_32 = ((/* implicit */long long int) arr_21 [1ULL] [i_7]);
            var_33 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) ((12933320409611551545ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) & ((-(((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
            {
                arr_31 [i_6] [i_8] = ((/* implicit */unsigned long long int) var_1);
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((2696157135U), (((/* implicit */unsigned int) (short)18632))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_6] [i_8] [i_6]))))) : (((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */long long int) -791695322)) : (-5499628525221542101LL)))));
            }
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                arr_36 [i_6] [i_6] [i_8] = ((/* implicit */short) (-((~(var_15)))));
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 3) 
                    {
                        var_35 = ((/* implicit */_Bool) arr_6 [i_10] [i_8] [i_6 - 2]);
                        var_36 = ((/* implicit */long long int) (short)32767);
                    }
                    var_37 = ((/* implicit */long long int) (+(arr_10 [i_8] [i_6 + 1] [i_8])));
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        var_38 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (short)29638))));
                        var_39 ^= ((/* implicit */unsigned long long int) var_8);
                    }
                }
                for (unsigned short i_14 = 1; i_14 < 9; i_14 += 3) 
                {
                    arr_48 [i_8] [i_8] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_30 [i_14])) ? (var_12) : (((/* implicit */long long int) 865325726U)))) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))));
                    arr_49 [i_6] [i_8] [i_8] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                    var_40 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_6 + 1])) ? (((/* implicit */long long int) var_8)) : (4461376030687838871LL)));
                    arr_50 [i_6] [i_6] [i_8] [i_14 - 1] = ((/* implicit */_Bool) arr_32 [i_6]);
                }
                arr_51 [i_6] [(_Bool)0] [i_8] [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 0LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) var_15)))))));
                var_41 = ((/* implicit */_Bool) (+(((((/* implicit */long long int) 1079471831)) & (var_15)))));
            }
            var_42 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(13412179967190986332ULL)))) ? ((-(arr_10 [0] [0] [0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1609321589U)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (unsigned short)59765)))))));
            var_43 = arr_9 [i_6] [i_8] [i_6];
        }
        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) /* same iter space */
        {
            arr_55 [i_15] = ((/* implicit */unsigned short) (unsigned char)193);
            var_44 ^= arr_43 [i_6];
            arr_56 [i_15] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (((((/* implicit */int) arr_47 [i_15])) + (((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 1]))))));
            var_45 ^= ((/* implicit */int) max((arr_2 [3LL] [i_15]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) arr_52 [i_6] [i_15] [i_6])))) : ((~(((/* implicit */int) (_Bool)1)))))))));
        }
        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
        {
            var_46 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) arr_52 [i_6 - 2] [i_6 + 1] [i_16])), (var_7)))));
            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_43 [i_6 + 1]))))) : (((/* implicit */int) (!(arr_14 [i_6 + 1] [i_16]))))));
            var_48 = ((/* implicit */long long int) min((245786186870067951ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_29 [i_6 - 2] [i_6] [i_6] [i_6])))))));
        }
        /* LoopSeq 3 */
        for (long long int i_17 = 2; i_17 < 9; i_17 += 1) /* same iter space */
        {
            var_49 *= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)63272))))), (arr_15 [i_6 + 1] [i_6] [i_17]))), (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) (short)0))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_18 = 4; i_18 < 7; i_18 += 3) 
            {
                var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -2751186677960366049LL)) && (((/* implicit */_Bool) (short)-3880)))))));
                arr_66 [i_18] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) * (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_1)) : (2285631091243538655LL)))));
                arr_67 [i_18] [i_18] [i_17 - 2] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (arr_9 [i_6] [i_6 - 2] [i_17 - 1])));
            }
            for (unsigned int i_19 = 0; i_19 < 10; i_19 += 1) 
            {
                var_51 *= ((/* implicit */_Bool) ((long long int) min((((/* implicit */long long int) 536805376U)), (-3493332997537732984LL))));
                var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) 3429641570U))));
            }
        }
        for (long long int i_20 = 2; i_20 < 9; i_20 += 1) /* same iter space */
        {
            var_53 = ((/* implicit */short) (-(((unsigned long long int) arr_73 [i_6]))));
            var_54 = ((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_2)), (max((-2285631091243538655LL), (var_15)))))));
            var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) (!(((/* implicit */_Bool) ((short) var_2))))))));
            var_56 ^= ((/* implicit */long long int) (+(((/* implicit */int) (short)10615))));
        }
        for (long long int i_21 = 2; i_21 < 9; i_21 += 1) /* same iter space */
        {
            var_57 = ((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), (min((4917525355778810779LL), (((long long int) 2889645294U))))));
            /* LoopSeq 2 */
            for (long long int i_22 = 1; i_22 < 8; i_22 += 1) /* same iter space */
            {
                var_58 ^= ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2265))) + (max((3422427528U), (((/* implicit */unsigned int) (unsigned short)46262)))))));
                var_59 = ((/* implicit */int) (-(((((/* implicit */_Bool) 4294967295U)) ? (var_12) : (var_12)))));
            }
            for (long long int i_23 = 1; i_23 < 8; i_23 += 1) /* same iter space */
            {
                var_60 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)3676)), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6 - 1] [3] [3]))) | (10221813445207543904ULL))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                arr_84 [i_6] [i_21] = ((((-2285631091243538654LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)197)))));
                var_61 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) | ((-(arr_70 [i_6 - 1])))));
            }
        }
        var_62 = ((/* implicit */unsigned short) min(((~(471416678U))), (((/* implicit */unsigned int) ((int) var_5)))));
        var_63 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-23))));
    }
    var_64 = ((/* implicit */unsigned short) min((var_64), (((/* implicit */unsigned short) (-((-(max((var_12), (-2751186677960366049LL))))))))));
}
