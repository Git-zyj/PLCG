/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220163
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) (((~((-(15192902388488305947ULL))))) << ((((-((+(-1108172920))))) - (1108172865)))));
                arr_6 [i_0] = max((((((/* implicit */_Bool) ((unsigned short) 0LL))) ? (((long long int) (signed char)6)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-1)) : (var_9)))) ^ (max((((/* implicit */unsigned int) (_Bool)1)), (0U)))))));
                var_18 = ((/* implicit */long long int) ((int) (signed char)-35));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 2; i_2 < 17; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            arr_13 [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)148)) || (((/* implicit */_Bool) 4LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -4LL)) ? (-1LL) : (((/* implicit */long long int) var_9)))))));
            var_19 = ((/* implicit */long long int) -960065620);
        }
        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            arr_16 [i_2] [i_4] [i_2] = ((/* implicit */long long int) (((~((-(((/* implicit */int) (unsigned short)30720)))))) + (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (~(6347714975253447807LL)))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)3525))));
                var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((2649119874857425465ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10578))));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */_Bool) 3324305676620160893LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)53707)))))))));
            }
        }
        for (long long int i_6 = 1; i_6 < 18; i_6 += 4) 
        {
            arr_22 [i_2 + 1] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) (short)1696)) <= (((/* implicit */int) (unsigned char)0))))) != (((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (unsigned char)196)))))) ? (max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)211))))), (10LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            arr_23 [i_2 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)11828)) ? ((+(((/* implicit */int) (unsigned char)134)))) : (((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)75))))));
        }
        for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) (unsigned short)65535);
            var_25 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) max(((unsigned char)181), (((/* implicit */unsigned char) (signed char)37)))))));
        }
        arr_28 [i_2] [i_2] = var_0;
    }
    for (unsigned char i_8 = 2; i_8 < 17; i_8 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)11819))))) == (-19LL)));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            /* LoopSeq 4 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_36 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (unsigned char)67))));
                var_27 = ((/* implicit */_Bool) max((((/* implicit */long long int) (((_Bool)1) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))), ((-(3800374324066133309LL)))));
            }
            /* vectorizable */
            for (unsigned char i_11 = 1; i_11 < 16; i_11 += 1) /* same iter space */
            {
                arr_39 [i_8] [i_9] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((-2121471859) % (((/* implicit */int) (signed char)91)))))));
                var_28 = (unsigned short)51780;
            }
            for (unsigned char i_12 = 1; i_12 < 16; i_12 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_45 [i_8] [i_8 - 2] [i_8 + 2] [i_8 - 2] [i_12] [i_8 + 1] = ((/* implicit */int) ((signed char) ((((/* implicit */int) max(((unsigned char)181), (var_16)))) >> (((((((/* implicit */int) (unsigned short)11835)) % (((/* implicit */int) (short)-13952)))) - (11832))))));
                    arr_46 [i_8] [i_12] [i_12] [i_13] [i_9] [i_13] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)53716)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)125)) && (((/* implicit */_Bool) 13457340599508878248ULL)))))) : (4LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) || (((/* implicit */_Bool) (+(9223372036854774784LL))))))))));
                    /* LoopSeq 4 */
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        arr_51 [(_Bool)1] [i_9] [i_12 + 3] [i_13] [i_14] |= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) -5575491718427181920LL))) << ((-(((/* implicit */int) ((((/* implicit */int) (signed char)105)) == (((/* implicit */int) (_Bool)1)))))))));
                        arr_52 [i_12] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) min((max((((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_12)) - (14193))))), (((378411775) / (((/* implicit */int) (unsigned short)54974)))))), (((/* implicit */int) (signed char)-116))));
                    }
                    for (unsigned int i_15 = 1; i_15 < 15; i_15 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        arr_57 [i_12] [i_9] [i_12] [i_13] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max(((signed char)126), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-5LL))))))), (4989403474200673367ULL)));
                        var_30 = ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34765)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) (unsigned short)16383))))) && (((/* implicit */_Bool) min((4989403474200673367ULL), (4989403474200673367ULL))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)31)), ((unsigned short)53717))))))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
                    {
                        arr_60 [i_9] [i_16] [i_16] |= ((/* implicit */int) ((((/* implicit */_Bool) 4LL)) ? (((((/* implicit */_Bool) (signed char)-8)) ? (-9036615703241985648LL) : (9036615703241985647LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-110)))))));
                        var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 9036615703241985648LL)) && (((/* implicit */_Bool) (unsigned short)65521)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)135)) && (((/* implicit */_Bool) 10LL)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9036615703241985648LL)) && (((/* implicit */_Bool) var_4)))))) | (min((var_5), (((/* implicit */unsigned long long int) var_14))))))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 19; i_17 += 2) /* same iter space */
                    {
                        arr_65 [i_12] [i_9] [i_9] [i_13] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (short)14861))))) ? (((long long int) var_8)) : (((long long int) var_14))));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (unsigned short)19567))) ^ ((-(((/* implicit */int) (unsigned short)34142))))));
                        var_33 = ((/* implicit */signed char) (-(((1) % (((((/* implicit */int) (unsigned short)49137)) - (((/* implicit */int) (short)-1))))))));
                    }
                    var_34 = ((/* implicit */_Bool) max(((((-(-9036615703241985631LL))) | (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65521))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49152)) >> (((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))))))))));
                    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((_Bool) ((int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)49153))))))));
                }
                /* LoopSeq 2 */
                for (long long int i_18 = 0; i_18 < 19; i_18 += 2) 
                {
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? ((+(((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) -9036615703241985631LL)) ? (115118845) : (-115118838)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)16378)))) : (((((long long int) (unsigned char)247)) << (((min((4989403474200673342ULL), (((/* implicit */unsigned long long int) 115118839)))) - (115118836ULL)))))));
                    arr_70 [i_18] [i_18] [i_18] [i_18] [i_8] [i_8] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_10)))))))) + (max((max((var_5), (((/* implicit */unsigned long long int) (unsigned short)0)))), (0ULL)))));
                }
                for (signed char i_19 = 0; i_19 < 19; i_19 += 2) 
                {
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((long long int) 18118269738411537588ULL)))));
                    var_38 = ((/* implicit */unsigned short) 2578315980914631915LL);
                    arr_74 [i_8 + 1] [i_12 + 2] [i_12] = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49152))) / (var_0))) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-47))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56824))))) : (((/* implicit */int) (unsigned char)44))));
                    arr_75 [i_12] = ((((/* implicit */_Bool) (+(((int) -3302912470106057865LL))))) ? (var_0) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)55))) / (-3038921857894233375LL))));
                }
            }
            for (unsigned char i_20 = 1; i_20 < 16; i_20 += 1) /* same iter space */
            {
                arr_78 [i_8] [i_20 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3078405730110906739LL)) ? (((/* implicit */long long int) 115118863)) : (274877874176LL)))) ? (max((((/* implicit */int) (signed char)-43)), (115118822))) : ((~(((2147483647) << (((5929494512859116820LL) - (5929494512859116820LL)))))))));
                var_39 = ((/* implicit */long long int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)49141)));
            }
            arr_79 [i_8 + 1] [i_9] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || ((_Bool)1)))))))));
            var_40 = -6921631094132478612LL;
            arr_80 [i_8] [i_9] = ((/* implicit */unsigned short) max(((+(max((var_10), (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) (signed char)0))))))));
            var_41 *= ((/* implicit */unsigned short) min((((/* implicit */long long int) 115118837)), (((((/* implicit */_Bool) (short)30692)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (0LL)))));
        }
        /* LoopNest 3 */
        for (long long int i_21 = 0; i_21 < 19; i_21 += 3) 
        {
            for (int i_22 = 0; i_22 < 19; i_22 += 2) 
            {
                for (unsigned short i_23 = 2; i_23 < 18; i_23 += 1) 
                {
                    {
                        arr_89 [i_8 - 1] [i_23] [i_22] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)0)), (((((/* implicit */int) (short)0)) + (((/* implicit */int) (unsigned short)16383))))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)4)) && (((/* implicit */_Bool) (unsigned char)255))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)3))))) && (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-54)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)245)) - (220)))))))))));
                        arr_90 [i_21] [i_21] [i_21] [i_21] [i_21] [i_23] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(-505735278))))))), (((((_Bool) 505735278)) ? (2061112971) : (((((/* implicit */_Bool) -7)) ? (-11) : (var_3)))))));
                        arr_91 [i_8 + 2] [i_8 + 1] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((min((((/* implicit */int) (unsigned char)0)), (-11))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) var_16))) - (27)))))) ? (((((/* implicit */_Bool) -165693032)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)85)) ? (3487925651532796425LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)108))))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_24 = 2; i_24 < 17; i_24 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_25 = 0; i_25 < 19; i_25 += 4) 
        {
            var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 152961006)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (unsigned char)100)))))));
            var_43 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)154)) <= (((/* implicit */int) (unsigned short)16368)))) ? (((/* implicit */int) ((115118839) != (((/* implicit */int) (unsigned char)26))))) : (((/* implicit */int) ((unsigned char) -7754077045302530834LL)))));
        }
        arr_96 [i_24] = (unsigned char)89;
    }
    var_44 = ((/* implicit */_Bool) var_5);
}
