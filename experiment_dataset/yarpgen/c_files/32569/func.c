/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32569
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) max(((-(var_2))), (arr_4 [i_2] [i_2 + 1] [i_2])))) ? (((((/* implicit */_Bool) max((63050394783186944LL), (var_3)))) ? (arr_5 [i_2 + 1] [i_1] [i_1 + 2] [i_1 + 3]) : (((((/* implicit */_Bool) 1476785368481479295LL)) ? (arr_4 [i_2] [i_1] [i_0]) : (-1476785368481479298LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_5 [i_0] [i_1] [i_0] [i_1])))) && (((/* implicit */_Bool) max((1476785368481479285LL), (-1476785368481479309LL)))))))));
                    var_16 = ((long long int) ((((/* implicit */int) ((1476785368481479295LL) < (-1476785368481479290LL)))) << (max((5LL), (var_8)))));
                }
            } 
        } 
        arr_6 [i_0] = 8465838940974185494LL;
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_3 = 4; i_3 < 20; i_3 += 3) 
        {
            arr_9 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_7 [i_0]) : (arr_8 [i_0] [15LL] [i_0])))) ? (arr_4 [i_0] [i_3 - 2] [i_3]) : (arr_5 [i_3] [i_3 + 4] [i_3 + 4] [i_3 - 4]));
            var_17 = arr_2 [i_0] [i_0] [i_3];
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_18 &= ((((((/* implicit */_Bool) var_11)) ? (arr_0 [i_4]) : (var_0))) & (5681566657497668798LL));
            var_19 = ((((((/* implicit */_Bool) 0LL)) ? (-4441077716690166888LL) : (4951708557675545674LL))) ^ (9223372036854775807LL));
        }
    }
    for (long long int i_5 = 2; i_5 < 16; i_5 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
        {
            arr_17 [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_5]))));
            var_20 = ((((/* implicit */_Bool) max((arr_12 [13LL] [i_6]), (arr_12 [i_5 + 1] [i_5 + 1])))) ? (max((arr_10 [i_5] [i_6]), (-1476785368481479300LL))) : (arr_10 [i_6] [i_6]));
            /* LoopSeq 1 */
            for (long long int i_7 = 3; i_7 < 16; i_7 += 2) 
            {
                var_21 = max((((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5] [i_5 - 2])) ? (arr_4 [i_5] [i_5 - 2] [i_5 + 1]) : (arr_15 [i_5] [13LL] [i_5 + 1]))), (((long long int) -3755977373170290200LL)));
                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7489024127636886504LL)) ? (-1156488506604627553LL) : (2421485827827627554LL)))) ? ((-9223372036854775807LL - 1LL)) : (((((((/* implicit */_Bool) arr_7 [i_7])) ? (5887225200154451693LL) : (arr_18 [i_5] [i_6] [i_6] [i_7]))) & (var_6))));
                /* LoopSeq 2 */
                for (long long int i_8 = 2; i_8 < 15; i_8 += 4) 
                {
                    arr_23 [i_5 - 2] [i_6] [i_7] [i_8] = arr_10 [i_5 - 2] [i_6];
                    var_23 = ((7131294075051190859LL) + (max((var_6), (var_8))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 2; i_9 < 16; i_9 += 3) /* same iter space */
                    {
                        arr_27 [7LL] [i_6] [8LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((4182389909778947880LL), (((var_2) & (-8325134836845444479LL))))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((long long int) ((((/* implicit */_Bool) max((-4441077716690166888LL), (4826899567127745002LL)))) ? (arr_15 [i_5 - 1] [i_8 + 1] [i_5 + 1]) : (((arr_11 [i_5 - 2] [i_7] [19LL]) / (1460370176757985749LL))))))));
                        var_25 = ((((/* implicit */_Bool) var_3)) ? (var_4) : ((+(arr_12 [i_8] [i_6]))));
                        var_26 = ((/* implicit */long long int) max((var_26), (max((((9223372036854775807LL) ^ (6317887663899163776LL))), (var_6)))));
                    }
                    for (long long int i_10 = 2; i_10 < 16; i_10 += 3) /* same iter space */
                    {
                        var_27 = ((((/* implicit */_Bool) -2302290405134278872LL)) ? (-8755914241951362858LL) : (-71054560917326990LL));
                        var_28 = 3506623429238016178LL;
                    }
                }
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    var_29 = ((((/* implicit */_Bool) ((long long int) 8325134836845444478LL))) ? (arr_7 [i_5]) : (((long long int) 6LL)));
                    arr_33 [i_5 - 2] [i_5] [i_5] [i_11] [i_5 + 1] [i_5] = var_5;
                    var_30 = (~(arr_2 [i_5 - 1] [i_5 - 2] [i_5 - 2]));
                    var_31 = ((long long int) arr_4 [i_5 + 1] [i_6] [i_5 + 1]);
                    var_32 = (+(arr_21 [i_7 - 3] [i_7 - 3] [i_5 - 1]));
                }
            }
            arr_34 [i_6] [i_6] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5])) ? (var_14) : (arr_11 [i_5] [23LL] [i_5])))) ? (arr_22 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1]) : (((long long int) 9223372036854775807LL)))) >> ((((~(4441077716690166860LL))) + (4441077716690166882LL))));
        }
        for (long long int i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
        {
            arr_38 [7LL] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 372719781636306699LL)) ? (372719781636306687LL) : (-9223372036854775787LL)))) ? (max((-1830379135598519305LL), (1011893120578626579LL))) : (arr_24 [i_5 + 1] [i_5 - 1] [i_12] [i_5] [i_5]))), (max((arr_18 [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 1]), (var_2))));
            arr_39 [i_5 + 1] [i_5] = (((!(((/* implicit */_Bool) -372719781636306704LL)))) ? (((((/* implicit */_Bool) 5696689500313801526LL)) ? (((long long int) -3200907509446293865LL)) : ((+(2928106876412544381LL))))) : (max((-1011893120578626581LL), ((~(9223090561878065152LL))))));
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_35 [i_5] [i_5] [i_5 - 1]) / (arr_37 [i_5 + 1])))) && (((/* implicit */_Bool) max((max((-8621871103700771835LL), (-3521557172055026718LL))), (((((/* implicit */_Bool) -5489924469163737426LL)) ? (var_11) : (-330314817533646769LL))))))));
        }
        for (long long int i_13 = 0; i_13 < 17; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                for (long long int i_15 = 2; i_15 < 16; i_15 += 2) 
                {
                    {
                        var_34 = ((long long int) max((((8071410601017886706LL) ^ (arr_21 [i_5 + 1] [i_13] [i_14]))), (max((7446032991842495204LL), (-3333582705099304760LL)))));
                        var_35 = ((max((var_1), (arr_15 [i_5 - 2] [i_13] [7LL]))) / (((((/* implicit */_Bool) ((var_6) / (arr_21 [4LL] [i_5 + 1] [i_14])))) ? (max((-3007493129016778018LL), (-8467353613682944015LL))) : (((long long int) arr_21 [i_15] [i_14] [i_13])))));
                    }
                } 
            } 
            arr_46 [i_13] [i_5] [i_5] = max((((((/* implicit */_Bool) 6248311923976474052LL)) ? (arr_28 [i_5] [i_5] [i_13] [i_5] [i_5 - 1] [i_13] [i_13]) : (0LL))), (max((max((-8071410601017886706LL), (var_6))), (((/* implicit */long long int) ((9223372036854775796LL) == (4279445349002742900LL)))))));
            var_36 = max((((((/* implicit */_Bool) -5918048088903462834LL)) ? (-138829513488930322LL) : (max((7507991235190125525LL), (-2228142279751279385LL))))), (arr_15 [16LL] [16LL] [i_5]));
            var_37 = arr_29 [i_5] [i_13] [i_13] [i_13] [i_13] [i_13];
        }
        var_38 *= ((((((((/* implicit */_Bool) arr_18 [13LL] [i_5 + 1] [7LL] [i_5])) && (((/* implicit */_Bool) 8365090260271239016LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_5 - 2] [i_5 - 1] [i_5])) || (((/* implicit */_Bool) 2228142279751279381LL)))))) : (((((/* implicit */_Bool) var_14)) ? (var_12) : (arr_10 [i_5 - 2] [i_5 + 1]))))) % (var_1));
        arr_47 [i_5] [i_5 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (arr_42 [i_5] [i_5 + 1] [i_5] [i_5 - 2]) : (arr_42 [i_5 - 1] [i_5 - 1] [i_5] [i_5 + 1])))) || (((/* implicit */_Bool) max((var_14), (arr_42 [i_5 - 2] [i_5 - 2] [8LL] [i_5 + 1]))))));
        arr_48 [i_5] [i_5] = arr_36 [i_5] [0LL] [i_5 + 1];
    }
    for (long long int i_16 = 1; i_16 < 22; i_16 += 2) 
    {
        arr_51 [i_16] = -3207324825622191999LL;
        var_39 = ((/* implicit */long long int) ((-5044212849768069563LL) != (((((((/* implicit */_Bool) var_13)) ? (arr_50 [i_16] [i_16]) : (var_0))) ^ (arr_49 [i_16 + 2])))));
        var_40 = ((((/* implicit */_Bool) var_5)) ? (max((((var_14) + (arr_0 [11LL]))), ((+(9223372036854775807LL))))) : (((((/* implicit */_Bool) ((9223372036854775807LL) / (4611686018427387904LL)))) ? ((+(var_7))) : (((long long int) -8071410601017886706LL)))));
    }
    var_41 = ((/* implicit */long long int) max((var_41), (((long long int) max((max((var_14), (var_10))), (max((var_14), (5044212849768069541LL))))))));
    var_42 = (((!(((/* implicit */_Bool) -6631819169046122382LL)))) ? (var_7) : (var_10));
    var_43 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) 1476785368481479308LL))));
}
