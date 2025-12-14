/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247026
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_13 = 27ULL;
        arr_2 [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned char)186)) : (0))) >> ((((~(11225322888044506384ULL))) - (7221421185665045231ULL))))) >> ((-(((((/* implicit */_Bool) 2)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -11))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (signed char)-2)) ^ (-16))));
        var_15 ^= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
        arr_5 [3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)2))));
        var_16 = ((/* implicit */long long int) ((_Bool) (+(5327789909123129469ULL))));
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4318462707955378517ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (10518834994580489053ULL))))));
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            var_18 = ((/* implicit */int) ((short) (~(3844287262U))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)14652))) ? (((((/* implicit */_Bool) (unsigned short)59959)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) 67092480U)))) : (((((/* implicit */_Bool) 4185466503U)) ? (0ULL) : (((/* implicit */unsigned long long int) -1LL))))));
            arr_12 [i_2] [i_2] [(_Bool)0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)252))))) ? ((-(0ULL))) : (((((/* implicit */_Bool) (short)25986)) ? (8163533617623337112ULL) : (((/* implicit */unsigned long long int) 3479914447739423875LL))))));
            var_20 = ((/* implicit */unsigned long long int) (~((+(866787280U)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 4) 
            {
                var_21 += ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */long long int) 2677212224U)) : (3448789312010470127LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (signed char)-1)) : (-1)))));
                var_22 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 72057594037927424LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29))) : (4844178859004881972LL))))));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((unsigned long long int) 2ULL)) >> (((((((/* implicit */_Bool) (unsigned char)219)) ? (72057594037927424LL) : (((/* implicit */long long int) 140173U)))) - (72057594037927376LL))))))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)99))))) ? (((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))) : (15436283889107374226ULL))) : (((((/* implicit */_Bool) 2666006093U)) ? (72057593769492480ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24706))))))))));
                }
                for (long long int i_6 = 2; i_6 < 19; i_6 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53808)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26647)))))) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : ((+(((/* implicit */int) (unsigned char)0)))))))));
                    arr_22 [i_2] [i_4] [i_6] = ((((_Bool) (unsigned short)13119)) ? (((long long int) 3905724589U)) : (((/* implicit */long long int) 1149680686)));
                }
                for (long long int i_7 = 2; i_7 < 19; i_7 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-96))) : (576460752303423487LL)))) ? (0ULL) : (((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52417))))))))));
                    var_27 = 18446744073709551615ULL;
                }
            }
        }
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            arr_29 [i_8] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10146))) : (((((/* implicit */_Bool) -1)) ? (1285977870158349477LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
            var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4941)) ? (4222124650659840ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)148))) : (((((/* implicit */_Bool) (signed char)-59)) ? (4222124650659840ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
            var_29 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 5838630934845415937ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20473))) : (-1LL))));
        }
        arr_30 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)239))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) -1LL)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)205))) | (4844178859004881972LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -16LL)) ? (4844178859004881972LL) : (1LL)))) ? (((((/* implicit */_Bool) -9223372036854775793LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)60))) : (4718354481665592823LL))) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 1005127593))))))))));
    }
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13119)) >> (((((/* implicit */int) (unsigned char)51)) - (24)))))) ? (((unsigned long long int) 8536739595083174864ULL)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)896)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)28061)))))))) : (((unsigned int) ((((/* implicit */_Bool) (unsigned short)55899)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-61))) : (-19LL))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
    {
        var_31 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)208)) ? (7600162093938718258LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */unsigned long long int) 1378136295)) : (2984629724759180113ULL)))))))) : ((~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) 286012436U)) : (-8845596590002712012LL)))))));
        var_32 += ((/* implicit */unsigned int) ((signed char) (unsigned char)217));
    }
    var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */unsigned long long int) 2529007201665736346LL)) : (18446744073709551615ULL)))) ? ((-(5130439920119230146ULL))) : (((/* implicit */unsigned long long int) ((-1721763371492219071LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)61)))))))))));
    var_34 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (signed char)-4))) << (((/* implicit */int) (!(((/* implicit */_Bool) 2218165362U)))))))) ? (((((/* implicit */_Bool) (~(29LL)))) ? (((13941424558127564642ULL) >> (((3003831925U) - (3003831903U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 8686759449821562240ULL)))))) : ((-(((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) : (14027790945798615883ULL)))))));
}
